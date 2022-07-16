/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:02:45 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/11 18:25:04 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count_forward;
	int	count_backward;
	int	middle;
	int	x;

	count_forward = 0;
	middle = size / 2;
	while (count_forward < middle)
	{
		count_backward = size - count_forward - 1;
		x = tab[count_forward];
		tab[count_forward] = tab[count_backward];
		tab[count_backward] = x;
		count_forward++;
	}
}
