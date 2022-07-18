/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:13:19 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/18 15:59:54 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	index;

	length = ft_strlen(dest);
	index = 0;
	while (length + index + 1 < size && src[index] != '\0')
	{
		dest[length + index] = src[index];
		index++;
	}
	dest[length + index] = '\0';
	if (length <= size)
		return (length + ft_strlen(src));
	return (size + ft_strlen(src));
}
