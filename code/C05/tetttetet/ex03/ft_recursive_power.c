/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:50:05 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/14 17:03:24 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	else if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else if (power < 0)
		result = ft_recursive_power(nb, power + 1) / nb;
	return (result);
}
