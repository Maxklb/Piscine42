/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pars.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:59:38 by mamahtal          #+#    #+#             */
/*   Updated: 2023/08/20 23:31:54 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_pars(char *str, char *path)
{	
	char	**tab;
	int		index;

	index = 0;
	tab = ft_read(path);
	if (ft_atoi(str) < 20)
	{
		index = strindex(tab, str);
		ft_put_str(tab, index);
	}
	ft_tabkiller(tab);
}
