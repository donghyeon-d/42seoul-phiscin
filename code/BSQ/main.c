/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 08:29:17 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/24 08:39:50 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	int	temp;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb == 0)
		ft_putchar('0');
	else if (nb < 10)
		ft_putchar(nb + 48);
	else if (nb >= 10)
	{
		temp = nb % 10;
		nb /= 10;
		ft_putnbr(nb);
		ft_putchar(temp + 48);
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
	{
		write(1, "ERROR\n", 6);
		return (0);
	}
	i = -1;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
