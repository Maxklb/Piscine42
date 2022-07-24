/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input_args.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:15:01 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/24 20:52:30 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "basic.h"
#include "basic2.h"

int	ft_check_input_args(int ac, char **av, int *input)
{
	*input = (ft_atoi(av));
	if ((ac < 2 && ac > 3) || (*input < 0))
	{
		write(1, "error", 5);
		return (-1);
	}
	return (*input);
}
