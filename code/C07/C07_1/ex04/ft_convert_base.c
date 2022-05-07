/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:59:08 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 20:17:51 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*init_str(long long nbr, int jinsu);
long long		turn_to(long long nbr, char *base_to, int jinsu, char *result);
void			str_swap(char *result, long long size);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	to_ten;
	long long	to_base_len;
	long long	result_size;
	char		*result;

	to_ten = ft_atoi_base(nbr, base_from);
	if (!(ft_valid(base_from)) || !(ft_valid(base_to)))
		return (NULL);
	to_base_len = ft_jinsu_len(base_to);
	result = init_str(to_ten, to_base_len);
	result_size = turn_to(to_ten, base_to, to_base_len, result);
	str_swap(result, result_size);
	return (result);
}

char	*init_str(long long nbr, int jinsu)
{
	long long	size;
	char		*init_str;

	size = 0;
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

long long	turn_to(long long nbr, char *base_to, int jinsu, char *result)
{
	long long	i;

	i = 0;
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
		i = 1;
	}
	while (nbr > 0)
	{
		result[i] = base_to[nbr % jinsu];
		nbr /= jinsu;
		i++;
	}
	result[i] = '\0';
	return (i);
}

void	str_swap(char *result, long long size)
{
	long long	i;
	char		temp;

	if (result[0] == '-')
	{
		i = 1;
		while (i < size / 2)
		{
			temp = result[i];
			result[i] = result[size - i];
			result[size - i] = temp;
			i++;
		}
	}
	else
		i = 0;
	while (i < size / 2)
	{
		temp = result[i];
		result[i] = result[size - i - 1];
		result[size - i - 1] = temp;
		i++;
	}
	return ;
}
