/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:02:09 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/13 13:22:09 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n * n <= (unsigned int)nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n%s\n%s\n%s\n",
		ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
		ft_find_next_prime(5) == 5 ? "OK" : "Fail",
		ft_find_next_prime(10) == 11 ? "OK" : "Fail",
		ft_find_next_prime(20) == 23 ? "OK" : "Fail"
		  );
}*/
