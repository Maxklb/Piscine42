/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:38:25 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/15 19:41:02 by makoch-l         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	while (index < argc)
	{
		ft_putchar(argv[index]);
		index++;
		ft_putchar2('\n');
	}
}
