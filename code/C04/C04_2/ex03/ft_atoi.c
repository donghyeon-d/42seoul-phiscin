/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:00:45 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/22 20:42:04 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v')
		return (1);
	if (*str == '\f' || *str == '\r' || *str == ' ')
		return (1);
	return (0);
}

int	ft_isnum(char *str)
{
	if ('0' <= *str && *str <= '9')
		return (1);
	return (0);
}

int	ft_issign(char *str)
{
	if (*str == '+' || *str == '-')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (ft_isspace(str))
		str++;
	while (ft_issign(str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isnum(str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int main()
{
	int a;
	
	a = ft_atoi("12345");
	printf("%d", a);
}
