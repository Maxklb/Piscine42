/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadonair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:40:35 by sadonair          #+#    #+#             */
/*   Updated: 2022/07/10 11:04:08 by lletourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_lmax(int cl, int cl_max)
{
	char	c;
	char	b;

	c = 'C';
	b = 'B';
	if (cl == 1 || cl == cl_max)
		write(1, &c, 1);
	else
		write(1, &b, 1);
}

void	ft_write(int cl, int ln, int cl_max, int ln_max)
{
	if (ln == 1)
	{
		if (cl == 1 || cl == cl_max)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (ln == ln_max)
	{
		if (cl == 1 || cl == cl_max)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (cl == 1 || cl == cl_max)
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
		return ;
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
