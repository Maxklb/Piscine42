/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:37:40 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/11 13:24:33 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	buffer;
	int	count_forward;

	count_forward = 0;
	while (count_forward < (size - 1))
	{
		if (tab[count_forward] > tab[count_forward + 1])
		{
			buffer = tab[count_forward];
			tab[count_forward] = tab[count_forward + 1];
			tab[count_forward + 1] = buffer;
			count_forward = 0;
		}
		else
			count_forward++;
	}
}
