/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:48:57 by mamahtal          #+#    #+#             */
/*   Updated: 2023/08/20 22:57:21 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	is_char(char c)
{
	return (c >= 'a' && c <= 'z');
}

void	ft_put_string(char *str)
{
	while (*str)
	{
		while (*str && !is_char(*str))
			str++;
		while (*str && is_char(*str))
			write(1, str++, 1);
	}
}

void	ft_put_str(char **tab, int index)
{
	ft_put_string(tab[index]);
}
