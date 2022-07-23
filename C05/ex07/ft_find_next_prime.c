/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:38:25 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/23 16:16:01 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	unsigned int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);	
}

int	ft_find_next_prime(int nb)
{
	ft_is_prime(nb);
	if (nb == 1)
		return (nb);
	if (nb == 0)	
	{
		while(nb != 1 )
		{
			nb++;
		}
	}
}
