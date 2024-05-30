/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:24:35 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/14 17:54:48 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[] = "Test1";
	char s2[] = "shfsofsn";

	printf("%d, %d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
}*/
