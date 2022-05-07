/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:28:23 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 10:28:32 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	if (power < 0)
		while (power++ < 0)
			result /= nb;
	else if (power == 0)
		return (1);
	else
	{
		while (power-- > 0)
			result *= nb;
	}
	return (result);
}
