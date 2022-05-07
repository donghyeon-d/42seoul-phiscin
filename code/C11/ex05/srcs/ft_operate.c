/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:49:52 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/23 15:51:23 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_add(int a, int b)
{
	int	add;

	add = a + b;
	return (add);
}

int	ft_sub(int a, int b)
{
	int	sub;

	sub = a - b;
	return (sub);
}

int	ft_mul(int a, int b)
{
	int	mul;

	mul = a * b;
	return (mul);
}

int	ft_div(int a, int b)
{
	int	div;

	div = a / b;
	return (div);
}

int	ft_mod(int a, int b)
{
	int	mod;

	mod = a / b;
	return (mod);
}
