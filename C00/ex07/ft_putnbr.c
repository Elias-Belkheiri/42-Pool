/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:15:48 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/07/22 13:37:29 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
		write(1, "-2147486348", 11);
	else if (nb >= 0 && nb < 10)
	{
		nb += 48;
		write(1, &nb, 1);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		ft_putnbr(nb);
	}
	else
	{
		a = nb / 10;
		ft_putnbr(a);
		a = nb % 10;
		ft_putnbr(a);
	}
}
