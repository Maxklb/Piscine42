/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxklb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:48:38 by maxklb            #+#    #+#             */
/*   Updated: 2022/07/28 00:09:46 by maxklb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	letter_count(char c)
{
	int repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}


int main (int argc, char **argv)
{
	int	repeat;

	if (argc != 2)
		write(1, "\n", 1);
	while (*argv[1])
	{
		repeat = letter_count(*argv[1]);
		while (repeat--)
			write (1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
}
