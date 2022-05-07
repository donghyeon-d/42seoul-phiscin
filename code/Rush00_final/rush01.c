/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingpark <mingpark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:14:35 by mingpark          #+#    #+#             */
/*   Updated: 2022/02/06 20:14:45 by mingpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row(int length, char first_c, char mid_c, char last_c)
{
	int	count;

	count = 1;
	while (count <= length)
	{
		if (count == 1)
			ft_putchar(first_c);
		else if (count != length)
			ft_putchar(mid_c);
		else if (count == length)
			ft_putchar(last_c);
		count++;
	}
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x > 0 && y > 0)
	{
		while (line <= y)
		{
			if (line == 1)
				ft_print_row(x, '/', '*', '\\');
			else if (line != y)
				ft_print_row(x, '*', ' ', '*');
			else if (line == y)
				ft_print_row(x, '\\', '*', '/');
			line++;
			ft_putchar('\n');
		}
	}
}
