/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:23:31 by mamahtal          #+#    #+#             */
/*   Updated: 2023/08/20 23:01:53 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	**ft_read(char *path);

char	**ft_split(char *str, char c, int size);

void	ft_tabkiller(char **strs);

void	ft_put_string(char *str);

void	ft_put_str(char **tab, int index);

void	ft_pars(char *str, char *path);

int		is_char(char c);

int		ft_strlen(char *str);

int		is_digit(char c);

int		ft_check_arg(char *str);

int		ft_atoi(char *str);

int		word_count(char *str, char c, int size);

int		count_alpha(char *str, char c, int pos, int size);

int		ft_strstrs(char *str, char *to_find);

int		strindex(char **strs, char *to_find);

#endif
