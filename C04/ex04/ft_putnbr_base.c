/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoch-le <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:04:20 by mkoch-le          #+#    #+#             */
/*   Updated: 2022/07/20 17:12:24 by mkoch-le         ###   ########.fr       */
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

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}

int	is_base_valid(char *caca)
{
	int	i;
	int	j;

	if (ft_strlen(caca) < 2)
		return (0);
	i = 0;
	while (caca[i] != '\0')
	{
		if (caca[i] = '+' || caca[i] = '-')
			return (0);
		j = i - 1;
		while (j <= 0)
		{
			if (caca[i] == caca[j])
				return (0);
			j--;
		}
		i++;
	}
	return (1);
}


void ft_putnbr_base(int nbr, char *base)
{
	if (!is_base_valid(base))
		return(0);
	i
}


int main ()
{
	ft_putnbr();
	return(0);
}
