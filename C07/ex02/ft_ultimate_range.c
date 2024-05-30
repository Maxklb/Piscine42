/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:57:19 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/23 23:40:50 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	*range = (int *) maloc((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + 1;
		i++;
	}
	return (max - min);
}

/*
#include <stdio.h>

int	main(void)
{
	int	**range;
	int	*range2;
	int	i;

	range = &range2;
	i = -1;
	printf("%d\n", ft_ultimate_range(range, 0, 15));
	while (++i < 5)
		printf("tab[%d] %d\n", i, (*range)[i]);
}
*/
