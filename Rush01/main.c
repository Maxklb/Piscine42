/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadorlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:50:34 by sadorlin          #+#    #+#             */
/*   Updated: 2022/07/17 20:52:22 by sadorlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static int	len_args(char *av)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	while (av[++i])
	{
		if (av[i] >= '1' && av[i] <= '4')
			len++;
		else if (av[i] < '1' && av[i] > '4' && av[i] != 32)
			return (-1);
	}
	if (len != 16)
		return (-1);
	return (len);
}

static char	*clear_args(char *av, char *args)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	args = (char *)malloc(sizeof(char) * 17);
	if (!args)
		return (NULL);
	while (av[++i])
	{
		if (av[i] >= '1' && av[i] <= '4')
			args[++j] = av[i];
	}
	return (args);
}

int	main(int ac, char **av)
{
	char	*args;
	char	**list;

	args = NULL;
	list = NULL;
	if (ac != 2 || len_args(av[1]) != 16)
		write (1, "Error\n", 6);
	else
	{
		args = clear_args(av[1], args);
		list = find_all_value(-1, 1233, list);
		niveau(args, list);
	}
	return (0);
}
