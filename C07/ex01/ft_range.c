/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:08:36 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/21 14:06:04 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	size_t	len;
	int	*tab;

	len = ((size_t)max - min + 1);
	tab = malloc(sizeof *tab * len);
	if (min => max)
		return (NULL);
	while (min < max)
	{
		*tab = min;
		min++;
	}
	return (tab);
}
