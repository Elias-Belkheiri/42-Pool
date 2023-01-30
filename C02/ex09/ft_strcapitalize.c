/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:48:30 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/07/27 15:56:56 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numerique(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

int	is_alphabet(char b)
{
	if ((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (is_alphabet(str[i]))
		{
			if (!(is_numerique(str[i - 1]) || is_alphabet(str[i - 1])))
			{
				str[i] -= 32;
			}
		}
		i++;
	}	
	return (str);
}
