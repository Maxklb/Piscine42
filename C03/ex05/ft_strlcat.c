/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:06:17 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/14 17:13:28 by makoch-l         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	tmp;
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = ft_strlen(src);
	tmp = ft_strlen(dest);
	if ((tmp > size) || (size < 1))
		return (size + j);
	while (src[i] && (tmp + i) < size - 1)
	{
		dest[tmp + i] = src[i];
		i++;
	}
	dest[tmp + i] = '\0';
	return (tmp + j);
}
