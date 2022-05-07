/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bbb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:55:42 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/16 16:38:23 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *str, int index)
{
	int	j;

	j = 0;
	if (index == 0)
		return (1);
	while (j < index && j < 10)
	{		
		if (str[index] == str[j])
			return (0);
		if (str[index] - str[j] == index - j)
			return (0);
		if (str[index] - str[j] == j - index)
			return (0);
		if (str[j] - str[index] == j - index)
			return (0);
		if (str[j] - str[index] == index - j)
			return (0);
		j++;
	}
	return (1);
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (1);
}

int	recur(char *str, int index, int *cnt)
{
	char	value;

	if (index == 10)
	{
		ft_printstr(str);
		*cnt += 1;
		return (0);
	}	
	value = '0';
	while (value <= '9')
	{
		str[index] = value;
		if (ft_check(str, index))
			recur(str, index + 1, cnt);
		str[index] = 0;
		value++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	char	queens[10];
	int		index;
	int		cnt;

	cnt = 0;
	index = 0;
	recur(queens, index, &cnt);
	return (cnt);
}
