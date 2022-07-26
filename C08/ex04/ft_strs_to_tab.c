/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxklb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:22:48 by maxklb            #+#    #+#             */
/*   Updated: 2022/07/26 23:32:02 by maxklb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char *str)
{
	char	index;
	
	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str		*dest;
	int		index;

	if (argc < 0)
		argc = 0;
	dest = malloc((argc + 1) * sizeof(t_stock_str));
	if (dest == NULL)
		return (NULL);
	index = 0;
	while (index < argc)
	{
		dest[index].size = ft_strlen(argv[index]);
		dest[index].str = argv[index];
		dest[index].copy = ft_strdup(argv[index]);
	}
	dest[index].str = 0;
	return (dest);
}
