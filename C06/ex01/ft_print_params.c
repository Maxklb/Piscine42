/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:59:14 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/21 17:06:26 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write (1, &str[index], 1);
		index++;
	}
}

void	ft_putchar2(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	x;

	x = 1;
	while (x < argc)
	{
		ft_putchar(argv[x]);
		x++;
		ft_putchar2('\n');
	}
}
