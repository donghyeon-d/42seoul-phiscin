/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:34:52 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 10:39:43 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (!(nb % 2))
		return (0);
	i = 3;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	if (nb < 3)
		return (2);
	if (!(nb % 2))
		nb++;
	prime = 0;
	if (!ft_is_prime(nb))
	{
		while (!prime)
		{
			nb += 2;
			prime = ft_is_prime(nb);
		}
	}
	return (nb);
}
int main()
{
	printf("%d", ft_find_next_prime(2147483600));
}
