/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxklb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:22:07 by maxklb            #+#    #+#             */
/*   Updated: 2022/07/28 10:37:59 by maxklb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			{
				*argv[1] += 32;
				write(1, argv[1], 1);
			}
			else if (*argv[1] >= 'a' && *argv[1] <= 'z')
			{
				*argv[1] -= 32;
				write(1, argv[1], 1);
			}
			else if (*argv[1] <= 64 && *argv[1] >= 0)
				write(1, argv[1], 1);
			else if (*argv[1] >= 91 && *argv[1] <= 96)
				write(1, argv[1], 1);
			else if (*argv[1] > 122)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (1);
}
