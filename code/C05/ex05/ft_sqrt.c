/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:00:07 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 10:15:41 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while (result * result < nb)
		result++;
	if (result * result == nb)
		return (result);
	else
		return (0);
}
int main()
{
	printf("1 :%d\n", ft_sqrt(1));
	printf("2 :%d\n", ft_sqrt(2));
	printf("16 :%d\n", ft_sqrt(16));
	printf("255 :%d\n", ft_sqrt(255));
	printf("2147483647 :%d\n", ft_sqrt(2147483647));
	printf("1600000000 :%d\n", ft_sqrt(1600000000));
	printf("0 :%d\n", ft_sqrt(0));
}
