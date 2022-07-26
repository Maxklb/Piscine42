/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:36:32 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/26 18:28:14 by maxklb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	index;

	if (min >= max)
		return (NULL);
	max = max - min;
	temp = malloc(max * sizeof(int));
	if (temp == NULL)
		return (NULL);
	index = 0;
	while (index < max)
	{
		temp[index] = min + index;
		index++;
	}
	return (temp);
}
