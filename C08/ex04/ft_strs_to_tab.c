/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:52:17 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/20 14:10:27 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str && str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*dest;

	if (ac < 0)
		ac = 0;
	dest = malloc(sizeof(t_stock_str) * (ac + 1));
	if (dest == NULL)
		return (NULL);
	index = 0;
	while (av[index] && index < ac)
	{
		dest[index].size = ft_strlen(av[index]);
		dest[index].str = av[index];
		dest[index].copy = ft_strdup(av[index]);
		index++;
	}
	dest[index].str = 0;
	return (dest);
}
