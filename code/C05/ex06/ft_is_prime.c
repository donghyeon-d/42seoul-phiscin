/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:17:27 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 10:11:31 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 2;
	if (nb < 2)
		return (0);
	if (i < nb)
	{
		j = 1;
		while (i * j != nb && i * j < nb)
		{
			j++;
		}
		if (i * j == nb)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	printf("-1 :%d\n", ft_is_prime(-1));
	printf("1 :%d\n", ft_is_prime(1));
	printf("0 :%d\n", ft_is_prime(0));
	printf("2 :%d\n", ft_is_prime(2));
	printf("7 :%d\n", ft_is_prime(7));
	printf("2147483647 :%d\n", ft_is_prime(2147483647));
	printf("91 :%d\n", ft_is_prime(91));
	printf("97 :%d\n", ft_is_prime(97));
}
