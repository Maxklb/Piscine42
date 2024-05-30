/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:32:57 by mamahtal          #+#    #+#             */
/*   Updated: 2023/08/20 22:30:19 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_check_arg(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{	
		if (i == 0 && str[i] == '0' && ft_strlen(str) > 1)
			return (0);
		if (!is_digit(str[i]) || ft_strlen(str) < 1)
			return (0);
		i++;
	}
	return (1);
}
