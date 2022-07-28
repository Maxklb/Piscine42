/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirro.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxklb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:49:11 by maxklb            #+#    #+#             */
/*   Updated: 2022/07/28 01:04:36 by maxklb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_alpha_mirror(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = 'Z' - (c - 'A');
	c = 'z' - (c - 'a');
	return (c);
}

int main(int argc,char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (ft_is_alpha(*argv[1]))
				ft_putchar(ft_alpha_mirror(*(argv[1]++)));
			else
				write(1, argv[1]++, 1);
		}
	}
	write (1, "\n", 1);
	return (1);
}
