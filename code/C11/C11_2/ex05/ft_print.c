/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:51:44 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/23 16:03:59 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	char	c;

	c = nb;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	temp;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		temp = nb % 10 + 48;
		nb /= 10;
		ft_putnbr(nb);
		ft_putchar(temp);
	}
	else
		ft_putchar(nb + 48);
}
