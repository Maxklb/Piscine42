/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:30:12 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/14 17:14:09 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			index = 1;
			while (to_find[index] && str[index] == to_find[index])
				index++;
			if (!to_find[index])
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void) {
	char s1[] = "C'est un test";
	char s2[] = "test";
	char s3[] = "C'est un test";
	char s4[] = "test";

	printf("%s:%s\n", ft_strstr(s1, s2), strstr(s3, s4));
	printf("%s\n", strcmp(s1, s3) == 0 && strcmp(s2, s4) == 0 ? "Success" : "Fail");
}*/
