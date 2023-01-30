/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:04:32 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/08/10 14:24:17 by ebelkhei         ###   ########.fr       */
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

void	ft_strcat(char *dest, char *sep, int *k)
{
	int	i;
	int	n;

	i = 0;
	n = *k;
	while (sep[i] != '\0')
	{
		dest[n] = sep[i];
		i++;
		n++;
	}
	*k = n;
}

int	ft_str(char **src, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (src[i][j] != '\0')
		{
			j++;
			len++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int		len;
	int		i;
	int		k;

	i = 0;
	k = 0;
	len = ft_str(strs, size);
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
		if (i < size && i != 0)
			ft_strcat(a, sep, &k);
		ft_strcat(a, strs[i], &k);
		i++;
	}
	a[k] = '\0';
	return (a);
}
