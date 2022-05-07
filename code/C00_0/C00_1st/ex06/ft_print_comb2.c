/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:37:21 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/08 16:37:27 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_num(int number)
{
	char	c;

	if (number < 10)
	{	
		c = number + 48;
		write(1, "0", 1);
		write(1, &c, 1);
	}
	if (number >= 10 && number < 100)
	{
		c = number / 10 + 48;
		write(1, &c, 1);
		c = number % 10 + 48;
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	left_num;
	int	right_num;

	left_num = 0;
	while (left_num < 100)
	{
		right_num = left_num + 1;
		while (right_num < 100)
		{
			ft_print_num(left_num);
			write(1, " ", 1);
			ft_print_num(right_num);
			if (left_num != 98 || right_num != 99)
				write(1, ", ", 2);
			right_num++;
		}
		left_num++;
	}
}
