/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:39:25 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/15 11:02:46 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_vaild(char c, int i);

int	input_len(char *str)
{
	int		i;
	int		length;
	char	now;
	char	prev;

	i = 0;
	length = 1;
	now = str[i];
	if (!is_vaild(now, 0))
		return (0);
	while (str[++i])
	{
		now = str[i];
		prev = str[i - 1];
		if (is_vaild(now, 1))
		{
			if (prev != ' ')
				return (0);
			length++;
		}
		if (i > 30)
			return (0);
	}
	return (length);
}

int	is_vaild(char c, int i)
{
	if (i == 0)
	{
		if (c == ' ' || c < '1' || c > '4')
			return (0);
		return (1);
	}
	else
	{
		if (c >= '1' && c <= '4')
			return (1);
		return (0);
	}
}
