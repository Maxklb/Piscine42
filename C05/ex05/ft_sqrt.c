/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:41:07 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/20 18:54:42 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb < 1)
		return (0);
	while (n * n < nb)
	{
		n++;
	}
	if (n * n > nb)
		return (0);
	return (n);
}
