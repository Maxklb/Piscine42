/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:58:30 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/15 10:15:39 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i < nb && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
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

	printf("%s:%s\n", ft_strncat(s1, s2, 5), strncat(s3, s4, 5));
	printf("%s\n", strcmp(s1, s3) == 0 && strcmp(s2, s4) == 0 ? "Success" : "Fail");
}*/
