/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:06:49 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 21:26:19 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	count;
	int	i;

	if (min >= max)
		return (NULL);
	count = max - min;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
