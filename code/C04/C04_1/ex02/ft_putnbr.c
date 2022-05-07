/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:19:33 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/15 19:22:11 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	char	c;

	c = nb + 48;
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
		temp = nb % 10;
		nb /= 10;
		ft_putnbr(nb);
		ft_putchar(temp);
	}
	else
		ft_putchar(nb);
}
