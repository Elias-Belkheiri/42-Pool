/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:12:56 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/07/28 00:21:14 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphabet(char b)
{
	if ((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	k;

	i = 0;
	if (str[0] == '\0')
	{
		k = 1;
	}
	while (str[i] != '\0')
	{
		if (is_alphabet(str[i]))
		{
			k = 1;
		}
		else
		{
			k = 0;
			break ;
		}
		i++;
	}
	return (k);
}
