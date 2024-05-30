/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadorlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:44:18 by sadorlin          #+#    #+#             */
/*   Updated: 2022/07/17 20:49:35 by sadorlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static int	doublon(int val)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = val % 10;
	val = val / 10;
	b = val % 10;
	val = val / 10;
	c = val % 10;
	val = val / 10;
	d = val % 10;
	val = val / 10;
	if (a != b && a != c && a != d && b != c && c != d && b != d)
		return (1);
	return (0);
}

static int	value(int val)
{
	while (val > 0)
	{
		if (!((val % 10) >= 1 && (val % 10) <= 4))
			return (0);
		val = val / 10;
	}
	return (1);
}

static char	test_nb(char a, char b, char c)
{
	char	r;

	if (a == '4')
		r = '1';
	else if (a == '3')
		r = '2';
	else if (a == '2' && b == '4')
		r = '2';
	else if (a == '2' && b == '3')
		r = '3';
	else if (a == '1' && b == '4')
		r = '2';
	else if (a == '1' && b == '3')
		r = '3';
	else if (a == '2' && b == '1' && c == '4')
		r = '2';
	else if (a == '2' && b == '1' && c == '3')
		r = '3';
	else if (a == '1' && b == '2' && c == '4')
		r = '3';
	else if (a == '1' && b == '2' && c == '3')
		r = '4';
	return (r);
}

static char	*fill_list(char *list, int val)
{
	int	i;

	i = 4;
	while (--i >= 0)
	{
		list[i] = (val % 10) + 48;
		val = val / 10;
	}
	return (list);
}

char	**find_all_value(int i, int val, char **list)
{
	char	l;
	char	r;

	list = (char **)malloc(sizeof(char *) * 24);
	if (!list)
		return (NULL);
	while (++val < 4322)
	{
		if (doublon(val) == 1 && value(val) == 1)
		{
			l = test_nb((val / 1000) + 48, ((val / 100) % 10) + 48,
					((val / 10) % 10) + 48);
			r = test_nb((val % 10) + 48, ((val / 10) % 10) + 48,
					((val / 100) % 10) + 48);
			list[++i] = (char *)malloc(sizeof(char) * 9);
			list[i] = fill_list(list[i], val);
			list[i][4] = '0';
			list[i][5] = l;
			list[i][6] = '0';
			list[i][7] = r;
			list[i][8] = '\0';
		}
	}
	return (list);
}
