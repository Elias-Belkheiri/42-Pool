/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:34:08 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/07/30 22:16:01 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] != '\0')
	{
		while (str[i] != '\0')
		{
			j = 0;
			if (str[i] == to_find[j])
			{
				while (str[j + i] == to_find[j])
				{
					j++;
					if (to_find[j] == '\0')
						return (&str[i]);
				}
			}
			i++;
		}
	}
	else
		return (str);
	return (0);
}
