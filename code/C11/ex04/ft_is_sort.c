/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:06:59 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/23 16:27:13 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sort(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	f = is_sort;
	i = 0;
	while (i < length - 2)
	{
		if (f(tab[i], tab[i + 1]) == 1 && f(tab[i + 1], tab[i + 2]) == -1)
			return (0);
		i++;
	}
	while (i < length - 2)
	{
		if (f(tab[i], tab[i + 1]) == -1 && f(tab[i + 1], tab[i + 2]) == 1)
			return (0);
		i++;
	}

	return (1);
}
