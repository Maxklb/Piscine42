/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:09:02 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/24 21:09:14 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC2_H
# define BASIC2_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

int		ft_atoi(char *str);
void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_check_input_args(int argc, char **argv, int *input);
int		ft_str_is_numeric(char *str);

#endif
