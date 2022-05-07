/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:59:08 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/22 10:38:01 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_convert_base(char *nbr, char *base_from, char *base_to);
char		*init_str(long long nbr, int jinsu);
void		turn_to(long long nbr, char *base_to, int jinsu, char *result);
long long	ft_what_type(char *str);
int			ft_valid(char *base);
int			ft_jinsu_len(char *base);
long long	ft_base(char *str, char *base);
long long	ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	to_ten;
	long long	to_base_len;
	char		*result;

	to_ten = ft_atoi_base(nbr, base_from);
	if (!(ft_valid(base_from)) || !(ft_valid(base_to)))
		return (NULL);
	to_base_len = ft_jinsu_len(base_to);
	result = init_str(to_ten, to_base_len);
	turn_to(to_ten, base_to, to_base_len, result);
	return (result);
}

char	*init_str(long long nbr, int jinsu)
{
	long long	size;
	char		*init_str;

	size = 0;
	if (nbr == 0)
		size++;
	if (nbr < 0)
	{
		size++;
		nbr /= -jinsu;
	}
	while (nbr > 0)
	{
		nbr /= jinsu;
		size++;
	}
	init_str = malloc(sizeof(char) * (size + 1));
	if (!init_str)
		return (NULL);
	return (init_str);
}

int	ft_numlen(long long nbr, int jinsu)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr /= jinsu;
		len++;
	}
	return (len);
}

void	turn_to(long long nbr, char *base_to, int jinsu, char *result)
{
	int			numi;

	numi = ft_numlen(nbr, jinsu);
	result[numi] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
	{
		result[0] = base_to[0];
		result[1] = '\0';
	}
	while (nbr > 0)
	{
		result[numi - 1] = base_to[nbr % jinsu];
		nbr /= jinsu;
		numi--;
	}
	return ;
}

