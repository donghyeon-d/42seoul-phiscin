/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:03:11 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/21 17:25:06 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_what_type(char *str);
int			ft_valid(char *base);
int			ft_jinsu_len(char *base);
long long	ft_base(char *str, char *base);
long long	ft_atoi_base(char *str, char *base);

long long	ft_what_type(char *str)
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

long long	ft_base(char *str, char *base)
{
	long long	num;
	int			i;
	int			j;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
			{
				num = num * ft_jinsu_len(base) + j;
				break ;
			}
			j++;
			if (base[j] == '\0')
				return (num);
		}
		i++;
	}
	return (num);
}

long long	ft_atoi_base(char *str, char *base)
{
	long long		num;
	long long		sign;
	char			*input;

	sign = 1;
	input = str;
	if (ft_valid(base) == 0)
		return (0);
	while (ft_what_type(str) == 1)
		str++;
	while (ft_what_type(str) == 2)
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	num = ft_base(str, base);
	return (num * sign);
}
