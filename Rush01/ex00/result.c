/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadorlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:50:10 by sadorlin          #+#    #+#             */
/*   Updated: 2022/07/17 20:50:13 by sadorlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	niveau(char *args, char **list)
{
	char	**ligne;
	int		a;
	int		i;

	a = 0;
	i = -1;
	ligne = (char **)malloc(sizeof(char *) * 5);
	if (!ligne)
		return ;
	while (i < 5)
	{
		ligne[++i] = (char *)malloc(sizeof(char) * 5);
		if (!ligne[i])
			return ;
	}
	i = 0;
	while (list[i][5] != args[8])
		i++;
}
