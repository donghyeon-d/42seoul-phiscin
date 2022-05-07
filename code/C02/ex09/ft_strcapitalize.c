/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:06:51 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/12 09:36:42 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
