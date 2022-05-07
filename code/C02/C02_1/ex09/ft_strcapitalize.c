/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:06:51 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/14 09:11:22 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_what_type(char *str)
{
	if (*str < 32 || 126 < *str)
		return (0);
	else if ('0' <= *str && *str <= '9')
		return (1);
	else if ('a' <= *str && *str <= 'z')
		return (2);
	else if ('A' <= *str && *str <= 'Z')
		return (3);
	else
		return (4);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (ft_what_type(&str[0]) == 2)
		str[0] -= 32;
	i = 1;
	while (str[i] != 0)
	{
		if (ft_what_type(&str[i]) == 3)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != 0)
	{
		if (ft_what_type(&str[i]) == 4 && ft_what_type(&str[i + 1]) == 2)
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}

int main()
{
		{
		char str1[100] = "salut, comment tu vas ? 42mots quet-des; cinqu+et+un";
		char str2[100] = "Bn3zi    f0=Ubox#Cd:Al!Zxb";
		char str3[100] = "HellO, I AM sryou. ????is gOOD FOR ;;42's 42HELLO";
		printf("----ex09----\n");
		printf("Before Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Changed Str : %s\n", ft_strcapitalize(str1));
		printf("Changed Str : %s\n", ft_strcapitalize(str2));
		printf("Changed Str : %s\n", ft_strcapitalize(str3));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	}
}
