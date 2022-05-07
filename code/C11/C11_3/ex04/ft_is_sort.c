/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:06:59 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/24 10:20:16 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	flag;

	i = -1;
	flag = 1;
	while (++i < length - 1 && flag == 1)
	{
		if ((f(tab[i], tab[i + 1])) >= 0)
			flag = 1;
		else
			flag = 0;
	}
	if (flag == 0)
	{
		i = -1;
		while (++i < length - 1 && flag == 0)
		{
			if ((f(tab[i], tab[i + 1])) <= 0)
				flag = 0;
			else
				return (0);
		}
	}
	return (1);
}
