/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:04:20 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/21 16:31:54 by mkoch-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

void	ft_putnbr(unsigned int nb, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (nb < len_base)
	{
		write(1, &base[nb], 1);
		return ;
	}
	ft_putnbr(nb / len_base, base);
	ft_putnbr(nb % len_base, base);
}

int	is_base_valid(char *caca)
{
	int	i;
	int	j;

	if (ft_strlen(caca) < 2)
		return (0);
	i = 1;
	while (caca[i] != '\0')
	{
		if (caca[i] == '+' || caca[i] == '-')
			return (0);
		j = i - 1;
		while (j >= 0)
		{
			if (caca[i] == caca[j])
				return (0);
			j--;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	number;

	if (!is_base_valid(base))
		return ;
	if (nbr < 0)
	{
		write (1, "-", 1);
		number = -nbr;
	}
	else
		number = nbr;
	ft_putnbr(number, base);
}
