/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxklb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:08:03 by maxklb            #+#    #+#             */
/*   Updated: 2022/07/18 14:57:49 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*x;

	x = dest;
	while (*x != '\0')
		x++;
	while (*src != '\0' && nb > 0)
	{
		*x = *(unsigned char *)src;
		x++;
		src++;
		nb --;
	}
	*x = '\0';
	return (dest);
}
