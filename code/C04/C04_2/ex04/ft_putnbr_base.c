/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:45:36 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 13:14:27 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_what_type(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v')
		return (1);
	else if (*str == '\f' || *str == '\r' || *str == ' ')
		return (1);
	else if (*str == '+' || *str == '-')
		return (2);
	else if ('0' <= *str && *str <= '9')
		return (3);
	else
		return (0);
	return (0);
}

int	ft_valid(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (ft_what_type(&base[i]) == 1 || ft_what_type(&base[i]) == 2)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_jinsu_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_jinsu_print(int nbr, int jinsu, char *base)
{
	int	temp;

	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		temp = -(nbr % jinsu);
		ft_jinsu_print(-(nbr / jinsu), jinsu, base);
		write(1, &base[temp], 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		temp = nbr % -jinsu;
		ft_jinsu_print(-nbr, jinsu, base);
	}
	else if (nbr > jinsu - 1)
	{
		temp = nbr % jinsu;
		ft_jinsu_print(nbr / jinsu, jinsu, base);
		 write(1, &base[temp], 1);
	}
	 else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	jinsu;

	jinsu = ft_jinsu_len(base);
	if (ft_valid(base))
		ft_jinsu_print(nbr, jinsu, base);
	return ;
}
