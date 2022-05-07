/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:18:19 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/08 17:06:37 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printing(int *array, int n)
{
	int	j;

	j = 0;
	while (j < n)
	{
		ft_putchar(array[j] + 48);
		j++;
	}
	if (array[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_recur(int array[], int num, int i)
{
	if (i == 0)
		array[i] = 0;
	else
		array[i] = array[i - 1] + 1;
	while (array[i] <= 10 - num + i)
	{
		if (i == num - 1)
			ft_printing(array, num);
		else
			ft_recur(array, num, i + 1);
		array[i] = array[i] + 1;
	}
}

void	ft_print_combn(int n)
{
	int	array[10];

	ft_recur(array, n, 0);
}
