/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylareo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:41:35 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/06 14:13:31 by ylareo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write(int cl, int ln, int cl_max, int ln_max)
{
	if (cl == 1 || cl == cl_max)
	{
		if (ln == 1 || ln == ln_max)
			ft_putchar('o');
		else
			ft_putchar('|');
	}
	else
	{
		if (ln == 1 || ln == ln_max)
			ft_putchar('-');
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
