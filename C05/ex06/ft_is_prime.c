/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:50:39 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/13 13:22:42 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n * n <= (unsigned int)nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
