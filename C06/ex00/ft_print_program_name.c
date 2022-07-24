/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:16:55 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/24 14:53:21 by mkoch-le         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	ft_putchar(argv[0]);
	if (argc < 2)
		return (0);
}
