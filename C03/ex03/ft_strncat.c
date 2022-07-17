/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxklb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:08:03 by maxklb            #+#    #+#             */
/*   Updated: 2022/07/17 19:53:29 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
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
