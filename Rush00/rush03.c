/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadonair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:40:35 by sadonair          #+#    #+#             */
/*   Updated: 2022/07/10 11:05:03 by lletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write(int cl, int ln, int cl_max, int ln_max)
{
	if (cl == 1)
	{
		if (ln == 1 || ln == ln_max)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (cl == cl_max)
	{
		if (ln == 1 || ln == ln_max)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (ln == 1 || ln == ln_max)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int column, int lign)
{
	int	l;
	int	c;

	if (column < 0 || lign < 0)
		return	;
	l = 1;
	c = 1;
	while (l <= lign)
	{
		while (c <= column)
		{
			ft_write(c, l, column, lign);
			c++;
		}
		ft_putchar('\n');
		c = 1;
		l++;
	}
}
