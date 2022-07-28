/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxklb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:32:16 by maxklb            #+#    #+#             */
/*   Updated: 2022/07/28 11:38:52 by maxklb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		while(*av[1])
		{
			if ((*av[1] >= 'A' && *av[1] <= 'M') || (*av[1] >= 'a' && *av[1] <= 'm'))
			{
				*av[1] += 13;
				write(1, *av[1], 1);
			}
			else if ((*av[1] >= 'N' && *av[1] <= 'Z') || (*av[1] >= 'n' && *av[1] <= 'z'))
			{
				*av[1] -= 13;
				write(1, *av[1], 1);
			}
		}
		av[1]++;
		return (1);
	}
	write(1, "\n", 1);
}
