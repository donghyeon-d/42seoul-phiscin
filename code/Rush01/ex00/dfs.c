/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:18:13 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/15 20:12:27 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_validate.h"
#include "checker.h"
#include "write_box.h"

int	dfs(int	row, int col, char **box, char *str)
{
	int	value;

	if (row == 4 && col == 0)
		if (is_validate(box, str))
			return (write_box(box));
	if (!(row == 4 && col == 0))
	{
		value = 0;
		while (++value < 5)
		{
			if (!check_row(row, value, box) && !check_col(col, value, box))
			{
				box[row][col] = value + '0';
				if (col == 3)
					if (dfs(row + 1, 0, box, str))
						return (1);
				if (!(col == 3))
					if (dfs(row, col + 1, box, str))
						return (1);
				box[row][col] = '0';
			}
		}
	}
	return (0);
}
