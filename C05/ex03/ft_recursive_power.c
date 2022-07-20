/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:06:37 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/20 15:21:47 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		nb = (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

int main (void)
{
	printf("%d\n", ft_recursive_power(1, 5));
	printf("%d\n", ft_recursive_power(1, -5));
	printf("%d\n", ft_recursive_power(-1, 5));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(3, 5));
}
