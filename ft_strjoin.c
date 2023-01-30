/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:04:32 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/08/10 11:05:24 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int	len;
	int	i;
	int	k;
	int	j;

	len = 0;
	i = 0;
	k = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	if (size == 0)
	{
		a = (char *)malloc(1);
		return (a);
	}
	a = (char *)malloc(len + (ft_strlen(sep) * (size - 1)) + 1);
	if (a == NULL)
		return (0);
	while (i < size)
	{
		j = 0;
		if (i < size && i != 0)
		{
			while (sep[j] != '\0')
			{
				a[k] = sep[j];
				k++;
				j++;
			}
		}
		j = 0;
		while (strs[i][j] != '\0')
		{
			a[k] = strs[i][j];
			k++;
			j++;
		}
		i++;
	}
	a[k] = '\0';
	return (a);
}
