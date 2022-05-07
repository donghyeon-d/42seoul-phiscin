/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_box.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:54:20 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/15 12:05:41 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	write_box(char **box)
{
	int	row;
	int	col;

	row = -1;
	col = -1;
	while (++row < 4)
	{
		col = -1;
		while (++col < 4)
		{
			write(1, &box[row][col], 1);
			if (col != 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
	return (1);
}
