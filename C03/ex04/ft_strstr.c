/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:02:37 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/17 19:51:52 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*needle;
	char	*haystack;

	if (*to_find = '\0')
		return (str);
	needle = to_find;
	haystack = str;
	if (*haystack = *needle)
		needle++;
}
