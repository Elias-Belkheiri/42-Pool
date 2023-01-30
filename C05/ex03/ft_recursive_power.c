/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:00:26 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/08/07 20:15:58 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pow;

	pow = power;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (pow > 1)
	{
		pow -= 1;
		return (nb * ft_recursive_power(nb, pow));
	}
	else
		return (nb);
}
