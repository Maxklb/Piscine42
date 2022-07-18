/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:57:27 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/17 20:42:21 by sadorlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_aff(int str[4][4])
{
	int	index;
	int	j;

	index = 0;
	while (index < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(str[index][j] + '0');
			ft_putchar(' ');
			j++;
		}
		index++;
		ft_putchar('\n');
	}
}
