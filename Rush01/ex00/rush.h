/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadorlin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:43:15 by sadorlin          #+#    #+#             */
/*   Updated: 2022/07/17 20:43:22 by sadorlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	**find_all_value(int i, int val, char **list);
void	niveau(char *args, char **list);

#endif
