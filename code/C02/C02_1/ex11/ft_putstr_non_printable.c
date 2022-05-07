/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:50:30 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/12 10:02:19 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printable(char c)
{
	if (31 < c && c < 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	int		i;

	hex = "0123456789ABCDEF";
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_printable(str[i]) == 1)
			write(1, &str[i], 1);
		else if (ft_printable(str[i]) == 0)
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned int)str[i] / 16], 1);
			write(1, &hex[(unsigned int)str[i] % 16], 1);
		}
		str++;
	}
}
