/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:05:24 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/07/31 17:09:44 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	tlen;

	tlen = ft_strlen(dest) + ft_strlen(src);
	len = ft_strlen(dest);
	i = 0;
	j = len;
	if (size <= len)
		return (size + ft_strlen(src));
	else if (size > len)
	{
		while (src[i] != '\0' && i < size - len - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	return (tlen);
}
