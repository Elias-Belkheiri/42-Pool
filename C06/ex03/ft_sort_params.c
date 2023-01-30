/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 21:02:23 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/08/07 21:04:09 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char **str, int ar)
{
	int	i;
	int	j;

	i = 1;
	while (i < ar)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*k;

	k = *a;
	*a = *b;
	*b = k;
}

int	main(int arc, char **arv)
{
	int	j;
	int	i;

	i = 1;
	j = 1;
	while (i < arc)
	{
		j = 1;
		while (j < arc - 1)
		{
			if (ft_strcmp(arv[j], arv[j + 1]) > 0)
				ft_swap(&arv[j], &arv[j + 1]);
			j++;
		}
		i++;
	}
	ft_putstr(arv, arc);
}
