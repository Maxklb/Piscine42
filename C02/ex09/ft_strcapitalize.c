/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:52:00 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/08 12:34:36 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] = str[index] + 32;
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	capitalize;

	index = 0;
	capitalize = 1;
	ft_strlowcase(str);
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (capitalize == 1)
				str[index] = str[index] - 32;
			capitalize = 0;
		}
		else if (str[index] >= '0' && str[index] <= '9')
			capitalize = 0;
		else
			capitalize = 1;
		index++;
	}
	return (str);
}

/*int	main()
{
	char str[] = "test TEST te92 +++TTTee ese es";
	
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
} */
