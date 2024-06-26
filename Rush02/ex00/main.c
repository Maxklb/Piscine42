/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:30:13 by mamahtal          #+#    #+#             */
/*   Updated: 2023/08/20 23:30:03 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char **av)
{	
	if (ac == 2 && ft_check_arg(av[1]))
		ft_pars(av[1], "numbers.dict");
	if (ac != 2 || !ft_check_arg(av[1]))
		write(1, "Error", 5);
	write(1, "\n", 1);
	return (0);
}
