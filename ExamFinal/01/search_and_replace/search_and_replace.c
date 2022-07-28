/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxklb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:07:14 by maxklb            #+#    #+#             */
/*   Updated: 2022/07/28 14:25:40 by maxklb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int	index;

	if (ac == 4)
	{
		if(av[2][1] != '\0' || av[3][1] != '\0')
		{
			write(1, "\n", 1);
			return (0);
		}

		index = 0;
		while (av[1][index] != '\0')
		{
			if (av[1][index] == av[2][0])
				av[1][index] = av[3][0];
			write(1, &av[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
