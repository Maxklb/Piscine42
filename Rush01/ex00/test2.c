/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugmonch <hugmonch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:46:15 by hugmonch          #+#    #+#             */
/*   Updated: 2023/08/13 18:14:55 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_ligne(int array[6][6], int nb)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (i < nb)
	{
		while (j < nb)
		{
			if (array[1][i] == array[1][j])
				return (0);
			j++;
		}
		j = i + 1;
		i++;
	}
	return (1);
}

int	check_colonne(int array[6][6], int nb)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (i < nb)
	{
		while (j < nb)
		{
			if (array[i][1] == array[j][1])
				return (0);
			j++;
		}
		j = i + 1;
		i++;
	}
	return (1);
}

int	count_colonne(int array[6][6], int nb)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < nb)
	{
		count += array[i][1] - 48;
		i++;
	}
	return (count);
}

int	complete_colonne(int array[6][6], int nb)
{
	int	i;
	int	c;

	i = 1;
	c = count_colonne(array, nb);
	while (i < nb)
	{
		if (check_colonne && c != 10)
		{
			if (array[i][1] == ' ')
			{
				array[i][1] = 10 - c;
			}
		}
		i++;
	}
}

int	ft_tab(int array[6][6])
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (array[0][i] == '1')
			array[1][i] = '4';
		if (array[5][i] == '1')
			array[4][i] = '4';
		if (array[0][i] == '4' && array[5][1] == '1')
		{
			array[1][i] = '1';
			array[2][i] = '2';
			array[3][i] = '3';
		}
		if (array[1][0] == '4' && array[1][5] == '1')
		{
			array[1][1] = '1';
			array[1][2] = '2';
			array[1][3] = '3';
			array[1][4] = '4';
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	rows = 0;
	int	columns = 0;
	int	i = 1;
	int	array[6][6] = { {' ', argv[1][0], argv[1][2], argv[1][4], argv[1][6], ' '},
		{argv[1][16], ' ', ' ', ' ', ' ', argv[1][8]},
		{argv[1][18], ' ', ' ', ' ', ' ', argv[1][10]},
		{argv[1][20], ' ', ' ', ' ', ' ', argv[1][12]},
		{argv[1][22], ' ', ' ', ' ', ' ', argv[1][14]},
		{' ', argv[1][24], argv[1][26], argv[1][28], argv[1][30], ' '} };

	rows = 0;
	columns = 0;
	i = 1;
	ft_tab(array);
	complete_colonne(array, 6);
	if (argc == 2)
	{
		while (rows < 6)
		{
			while (columns < 6)
			{
				ft_putchar(array[rows][columns]);
				columns++;
			}
			columns = 0;
			ft_putchar('\n');
			rows++;
		}
	}
	return (0);
}
