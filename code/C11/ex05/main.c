/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:56:42 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/23 15:57:20 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_what_oper(char *argv[])
{
	if (argv[2][0] == '+')
		return (1);
	else if (argv[2][0] == '-')
		return (1);
	else if (argv[2][0] == '*')
		return (1);
	else if (argv[2][0] == '/')
		return (1);
	else if (argv[2][0] == '%')
		return (1);
	else
		return (0);
}

int	input_valid(char *argv[])
{
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	if (!(ft_what_oper(argv)))
	{
		write(1, "0\n", 2);
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	(*pf)(int, int);
	int	fir_num;
	int	sec_num;

	pf = 0;
	if (argc != 4)
		return (0);
	if (!(input_valid(argv)))
		return (0);
	fir_num = ft_atoi(argv[1]);
	sec_num = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		pf = ft_add;
	else if (argv[2][0] == '-')
		pf = ft_sub;
	else if (argv[2][0] == '*')
		pf = ft_mul;
	else if (argv[2][0] == '/')
		pf = ft_div;
	else if (argv[2][0] == '%')
		pf = ft_mod;
	ft_putnbr(pf(fir_num, sec_num));
	write(1, "\n", 1);
	return (0);
}
