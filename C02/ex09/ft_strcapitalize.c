/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:58:50 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/17 11:19:49 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	if (str[index] >= 'A' && str[index] <= 'Z')
		str[index] += 32;
	while (str[index] != '\0')
	{
		
