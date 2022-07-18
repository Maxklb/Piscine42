/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:02:37 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/18 12:11:10 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	index;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			index = 1;
			while (to_find[index] && str[index] == to_find[index])
				index++;
			if (!to_find[index])
				return (str);	
		}
		str++;
	}
	return (0);
}
