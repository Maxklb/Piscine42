/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:15:30 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/14 17:51:27 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[] = "Test1";
	char s2[] = "shfsofsn";

	printf("%d, %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
}*/
