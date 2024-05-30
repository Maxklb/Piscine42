/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:17:20 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/14 17:08:27 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	dest_len;

	dest_len = ft_strlen(dest);
	index = 0;
	while (src[index] != '\0')
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[10] = "test1";
	char s2[] = "ok";
	char s3[10] = "test1";
	char s4[] = "ok";

	printf("%s:%s\n", ft_strcat(s1, s2), strcat(s3, s4));
	printf("%s\n", strcmp(s1, s3) == 0 && strcmp(s2, s4) == 0 ? "Success" : "Fail");
}*/
