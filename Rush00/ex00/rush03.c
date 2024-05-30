/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:31:38 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/06 15:34:08 by ylareo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write(int cl, int l, int column_max, int lign_max)
{
	if (cl == 1)
	{
		if (l == 1 || l == lign_max)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (cl == column_max)
	{
		if (l == 1 || l == lign_max)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (l == 1 || l == lign_max)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	if (x < 0 || y < 0)
		return ;
	l = 1;
	c = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			ft_write(c, l, x, y);
			c++;
		}
		ft_putchar('\n');
		c = 1;
		l++;
	}
}
