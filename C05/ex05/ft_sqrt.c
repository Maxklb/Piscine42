/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:41:07 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/23 18:58:36 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	n;

	n = 1;
	if (nb < 1)
		return (0);
	while (n * n < (unsigned int)nb)
	{
		n++;
	}
	if (n * n > (unsigned int)nb)
		return (0);
	return (n);
}
