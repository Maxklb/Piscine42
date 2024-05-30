/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:35:29 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/09 13:59:10 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
		lenght++;
	return (lenght);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	lenght;

	index = 0;
	lenght = ft_strlen(src);
	while (src[index] != '\0' && index + 1 < size)
	{			
		dest[index] = src[index];
		index++;
	}
	while (index < size)
	{
		dest[index] = '\0';
		index++;
	}
	return (lenght);
}
