/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:34:15 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 21:30:00 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	count = max - min;
	*range = malloc(sizeof(int) * count);
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < count)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (count);
}
