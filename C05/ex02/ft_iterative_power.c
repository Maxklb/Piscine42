/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:12:03 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/12 16:30:46 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tmp;
	int	n;

	tmp = nb;
	n = 1;
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (power > 0)
	{
		while (n < power)
		{
			nb = nb * tmp;
			n++;
		}
		return (nb);
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("0:%d\n", ft_iterative_power(10, -2));
	printf("100:%d\n", ft_iterative_power(-10, 2));
	printf("216:%d\n", ft_iterative_power(6, 3));
	printf("100:%d\n", ft_iterative_power(10, 2));
}
*/
