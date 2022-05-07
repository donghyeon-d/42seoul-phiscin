/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:34:52 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 10:13:14 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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

int	ft_find_next_prime(int nb)
{
	int	prime;

	if (nb < 2)
		nb = 2;
	prime = 0;
	if (!ft_is_prime(nb))
	{
		while (!prime)
		{
			nb++;
			prime = ft_is_prime(nb);
		}
	}
	return (nb);
}

int main()
{
	printf("%d\n", ft_find_next_prime(91));
	printf("%d\n", ft_find_next_prime(92));
	printf("%d\n", ft_find_next_prime(97));
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(2147483600));
}
