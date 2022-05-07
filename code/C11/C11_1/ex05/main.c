/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:56:42 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/24 09:47:03 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_what_oper(char *argv[])
{
	if (argv[2][0] == '+' && argv[2][1] == 0)
		return (1);
	else if (argv[2][0] == '-' && argv[2][1] == 0)
		return (1);
	else if (argv[2][0] == '*' && argv[2][1] == 0)
		return (1);
	else if (argv[2][0] == '/' && argv[2][1] == 0)
		return (1);
	else if (argv[2][0] == '%' && argv[2][1] == 0)
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
	if (ft_what_oper(argv) == 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	return (1);
}

int	doop(int fir, char *argv[], int sec, int (*pf[])(int, int))
{
	int	num;

	num = 0;
	if (argv[2][0] == '+')
		num = pf[0](fir, sec);
	else if (argv[2][0] == '-')
		num = pf[1](fir, sec);
	else if (argv[2][0] == '*')
		num = pf[2](fir, sec);
	else if (argv[2][0] == '/')
		num = pf[3](fir, sec);
	else if (argv[2][0] == '%')
		num = pf[4](fir, sec);
	return (num);
}

int	main(int argc, char *argv[])
{
	int	(*pf[5])(int, int);
	int	fir_num;
	int	sec_num;
	int	num;

	pf[0] = ft_add;
	pf[1] = ft_sub;
	pf[2] = ft_mul;
	pf[3] = ft_div;
	pf[4] = ft_mod;
	if (argc != 4)
		return (0);
	if (input_valid(argv) == 0)
		return (0);
	fir_num = ft_atoi(argv[1]);
	sec_num = ft_atoi(argv[3]);
	num = doop(fir_num, argv, sec_num, pf);
	ft_putnbr(num);
	write(1, "\n", 1);
	return (0);
}
