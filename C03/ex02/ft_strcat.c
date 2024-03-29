/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:01:52 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/17 19:53:10 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*x;

	x = dest;
	while (*x != '\0')
		x++;
	while (*src != '\0')
	{
		*x = *(unsigned char *)src;
		x++;
		src++;
	}
	*x = '\0';
	return (dest);
}
