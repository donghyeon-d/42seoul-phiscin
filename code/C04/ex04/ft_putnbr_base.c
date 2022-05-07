/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:15:52 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/14 15:35:14 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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
		temp = nbr % -jinsu;
		ft_jinsu_print(-nbr / jinsu, jinsu, base);
	}
	 if (nbr < 0)
	{
		write(1, "-", 1);
		temp = nbr % -jinsu;
		ft_jinsu_print(-nbr, jinsu, base);
	}
	else if (nbr > jinsu)
	{
		temp = nbr % jinsu;
		ft_jinsu_print(nbr / jinsu, jinsu, base);
		 write(1, &base[temp], 1);
	}
	 else
		write(1, &base[nbr], 1);
}

int	ft_valid_jinsu(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_jinsu_len(base) == 0 || ft_jinsu_len(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	jinsu;

	jinsu = ft_jinsu_len(base);
	if (ft_valid_jinsu(base))
		ft_jinsu_print(nbr, jinsu, base);
}



int main()
{
	{
		printf("----ex04----\n");
		printf("8867\n");
		ft_putnbr_base(1132, "9876543210");
		printf("\n");

		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "");
		printf("\n");

		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "aabc!");
		printf("\n");

		printf("-bDBbFjci\n");
		ft_putnbr_base(-2147483648, "abcdefghijABCDEFGHIJ"); // 20base
		printf("\n");

		printf("*///////\n");
		ft_putnbr_base(2147483647, "!@#$%^&*()<>,.?/"); // 16base
		printf("\n");

		printf("-@@#!\n");
		ft_putnbr_base(-42, "!@#"); // 3base
		printf("\n");
	}
	printf("\n");
}
