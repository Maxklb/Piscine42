/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:26:59 by makoch-l          #+#    #+#             */
/*   Updated: 2023/08/22 12:27:15 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_separator(str[i], charset))
		i++;
	return (i);
}

char	*word_copy(char *src, int i)
{
	char	*dest;

	dest = malloc((i + 1) * sizeof(char *));
	if (!dest)
		return ((void *) 0);
	dest[i] = '\0';
	while (i--)
		dest[i] = src[i];
	return (dest);
}

int	ft_word_count(char *str, char *charset)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*str)
	{
		if (!ft_is_separator(*str, charset) && !word)
		{
			count++;
			word = 1;
		}
		else if (ft_is_separator(*str, charset))
			word = 0;
		str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		word_numb;
	int		word_len;
	int		i;
	char	**string;

	word_numb = ft_word_count(str, charset);
	string = malloc((word_numb + 1) * sizeof(char *));
	if (!string)
		return ((void *) 0);
	i = 0;
	while (i < word_numb)
	{
		while (*str && ft_is_separator(*str, charset))
				str++;
		word_len = ft_word_len(str, charset);
		string[i] = word_copy(str, word_len);
		if (!string[i])
			return ((void *) 0);
		str += word_len;
		i++;
	}
	string[word_numb] = 0;
	return (string);
}
/*
#include <stdio.h>
#include <unistd.h>

int main()
{
	char **tab;
	int	i;
	int	j;

    char a[] = "jestemzzbogiemzalfa";
    tab = ft_split(a, "z");
    i = 0;
    while (tab[i])
    {
	    j = 0;
	    while(tab[i][j])
	    {
		    write(1, &tab[i][j], 1);
		    j++;
	    }
	    write(1, "\n", 1);
	    i++;
    }
}*/
