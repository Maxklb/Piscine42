/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:09:45 by mamahtal          #+#    #+#             */
/*   Updated: 2023/08/20 22:30:40 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_read(char *path)
{	
	char	**strs;
	char	buf[2048];
	int		fd;
	int		len;
	int		size;

	len = 1;
	size = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	while (len > 0)
	{
		len = read(fd, buf, 2048);
		size += len;
	}
	close(fd);
	strs = ft_split(buf, '\n', size);
	if (!strs)
		return (NULL);
	return (strs);
}
