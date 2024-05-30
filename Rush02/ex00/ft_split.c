/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:29:35 by mamahtal          #+#    #+#             */
/*   Updated: 2023/08/20 22:32:12 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	word_count(char *str, char c, int size)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < size)
	{
		while (i < size && str[i] == c)
			i++;
		if (i < size && str[i] != c)
			count++;
		while (i < size && str[i] != c)
			i++;
	}
	return (count);
}

int	count_alpha(char *str, char c, int pos, int size)
{
	int	count;

	count = 0;
	while (pos < size && str[pos] != c)
	{
		count++;
		pos++;
	}
	return (count);
}

char	**ft_split(char *str, char c, int size)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	strs = malloc(sizeof(char *) * word_count(str, c, size) + 1);
	if (!strs)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < word_count(str, c, size))
	{
		while (j < size && str[j] == c)
			j++;
		strs[i] = malloc(sizeof(char) * count_alpha(str, c, j, size) + 1);
		if (!strs[i])
			return (NULL);
		k = -1;
		while (j < size && str[j] != c)
			strs[i][++k] = str[j++];
		strs[i][++k] = '\0';
	}
	strs[i] = 0;
	return (strs);
}
