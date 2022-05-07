/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:05:11 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/15 12:02:04 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	right_side(char c, int row, char **box)
{
	int		col;
	int		cnt;
	char	max;

	cnt = 1;
	col = 3;
	max = box[row][col];
	while (--col >= 0)
	{
		if (max < box[row][col])
		{
			cnt++;
			max = box[row][col];
		}
	}
	if (c == cnt + '0')
		return (1);
	return (0);
}

int	left_side(char c, int row, char **box)
{
	int		col;
	int		cnt;
	char	max;

	cnt = 1;
	col = 0;
	max = box[row][col];
	while (++col < 4)
	{
		if (max < box[row][col])
		{
			cnt++;
			max = box[row][col];
		}
	}
	if (c == cnt + '0')
		return (1);
	return (0);
}

int	down_side(char c, int col, char **box)
{
	int		row;
	int		cnt;
	char	max;

	cnt = 1;
	row = 3;
	max = box[row][col];
	while (--row >= 0)
	{
		if (max < box[row][col])
		{
			cnt++;
			max = box[row][col];
		}
	}
	if (c == cnt + '0')
		return (1);
	return (0);
}

int	up_side(char c, int col, char **box)
{
	int		row;
	int		cnt;
	char	max;

	cnt = 1;
	row = 0;
	max = box[row][col];
	while (++row < 4)
	{
		if (max < box[row][col])
		{
			cnt++;
			max = box[row][col];
		}
	}
	if (c == cnt + '0')
		return (1);
	return (0);
}

int	is_validate(char **box, char *str)
{
	int		i;
	int		flag;
	int		box_index;

	flag = 0;
	i = -1;
	while (++i < 31)
	{
		box_index = (i % 8) / 2;
		if (str[i] != ' ')
		{
			if (i < 7)
				flag = up_side(str[i], box_index, box);
			else if (i < 15)
				flag = down_side(str[i], box_index, box);
			else if (i < 23)
				flag = left_side(str[i], box_index, box);
			else if (i < 31)
				flag = right_side(str[i], box_index, box);
		}
		if (flag == 0)
			return (0);
	}
	return (1);
}
