/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:19:59 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/13 16:57:12 by sanghyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row(int row, int value, char **box)
{
	int	col;

	col = -1;
	while (++col < 4)
		if (box[row][col] == (value + '0'))
			return (1);
	return (0);
}

int	check_col(int col, int value, char **box)
{
	int	row;

	row = -1;
	while (++row < 4)
		if (box[row][col] == (value + '0'))
			return (1);
	return (0);
}
