/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:00:07 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 10:17:09 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned long long	result;

	if (nb <= 0)
		return (0);
	result = 1;
	while (result * result < (unsigned long long)nb)
		result++;
	if (result * result == (unsigned long long)nb)
		return (result);
	else
		return (0);
}
