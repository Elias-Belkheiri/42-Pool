/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:58:06 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/08/04 15:48:39 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(long nb, char *base)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb >= 0 && nb < 10)
	{
		nb += 48;
		write (1, &nb, 1);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
		ft_putnbr(nb,base);
	}
	else
	{
		ft_putnbr(nb / len(base),base);
		ft_putnbr(base[nb % len(base)],base);
	}
}
