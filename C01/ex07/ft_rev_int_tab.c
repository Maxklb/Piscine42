/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:40:44 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/06 17:45:33 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;
	size--;
	while (index < size)
	{
		temp = tab[index];
		tab[index] = tab[size];
		tab[size] = temp;
		index++;
		size--;
	}
}
