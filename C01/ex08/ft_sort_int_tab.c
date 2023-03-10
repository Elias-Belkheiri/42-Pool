/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:55:09 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/07/25 15:59:45 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size -1 - i)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				k = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = k;
			}
			j++;
		}
		i++;
	}
}
