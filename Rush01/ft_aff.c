/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:57:27 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/17 18:13:51 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_aff(int **str) //** pour tableau en 2 dimensions
{
	int	index;

	index = 0;
	while (index < 4)
	{
		ft_putchar(*str[0]);
		ft_putchar(' ');
		str++;
	}
}

int main (int argc, char *argv[])

