/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:04:14 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/13 13:33:03 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 1)
		return (!nb);
	n = 1;
	while (nb)
		n *= nb--;
	return (n);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("0:%d\n", ft_iterative_factorial(-10));
}*/
