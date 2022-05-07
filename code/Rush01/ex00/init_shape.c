/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_shape.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:01:33 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/13 17:01:43 by sanghyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**init_shape(int box_size)
{
	char	**box;
	int		row;
	int		col;
	int		size;

	size = box_size / 4;
	box = malloc(sizeof(char *) * size);
	if (box == NULL)
		return (NULL);
	row = 0;
	while (row < size)
	{
		box[row] = malloc(sizeof(char *) * size);
		if (box == NULL)
			return (NULL);
		col = 0;
		while (col < size)
		{
			box[row][col] = '0';
			col++;
		}
		row++;
	}
	return (box);
}
