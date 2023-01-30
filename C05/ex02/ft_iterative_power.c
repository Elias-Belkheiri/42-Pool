/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:23:02 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/08/01 22:25:06 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	j;
	int	n;

	j = 0;
	n = nb;
	if (power > 0)
	{
		while (j < power - 1)
		{
			nb *= n;
			j++;
		}
		return (nb);
	}
	else if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
		return (0);
}
