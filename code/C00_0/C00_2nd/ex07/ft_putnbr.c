/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 10:19:45 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/09 09:35:51 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
