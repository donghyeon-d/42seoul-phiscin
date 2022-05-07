/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:06:51 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/14 09:59:54 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_what_type(char *str)
{
	if ('0' <= *str && *str <= '9')
		return (1);
	else if ('a' <= *str && *str <= 'z')
		return (2);
	else if ('A' <= *str && *str <= 'Z')
		return (3);
	else
		return (0);
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
		if (ft_what_type(&str[i]) == 0 && ft_what_type(&str[i + 1]) == 2)
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
