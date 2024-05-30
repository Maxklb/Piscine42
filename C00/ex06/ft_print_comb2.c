/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:48:28 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/05 16:09:17 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char c)
{
	write(1, &c, 1);
}

void	init(int a, int b, int last)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
	ft_putchar(' ');
	ft_putchar((b / 10) + '0');
	ft_putchar((b % 10) + '0');
	if (last != 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;
	int	last;

	c = 0;
	while (c < 100)
	{
		d = c + 1;
		while (d < 100)
		{
			if (c == 98 && d == 99)
				last = 1;
			else
				last = 0;
			init(c, d, last);
			d++;
		}
		c++;
	}
}
