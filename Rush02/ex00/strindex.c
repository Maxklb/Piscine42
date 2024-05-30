/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strindex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:38:13 by mamahtal          #+#    #+#             */
/*   Updated: 2023/08/20 23:03:24 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strstrs(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (0);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] && to_find[j] == str[i + j])
				j++;
			if (!to_find[j])
				return (1);
		}
		i++;
	}
	return (0);
}

int	strindex(char **strs, char *to_find)
{
	int	i;

	while (strs[i])
	{
		if (ft_strstrs(strs[i], to_find))
			return (i);
		i++;
	}
	return (-1);
}
