/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:06:44 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/24 21:08:45 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basic.h"
#include "basic2.h"

int	ft_atoi(char *str)
{
	int		n;
	int		i;
	int		sign;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + str[i++] - '0';
	return (n * sign);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

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

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '\0')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
