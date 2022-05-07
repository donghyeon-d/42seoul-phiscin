/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:59:53 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/22 10:05:34 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_cpycpy(int size, char **strs, char *sep, char *dest)
{
	int		i;
	int		allen;

	i = -1;
	allen = 0;
	while (++i < size)
	{
		ft_strcpy(&dest[allen], strs[i]);
		allen += ft_strlen(strs[i]);
		if (i != size - 1)
		{
			ft_strcpy(&dest[allen], sep);
			allen += ft_strlen(sep);
		}
	}
	dest[allen] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		allen;
	int		seplen;

	i = -1;
	allen = 0;
	seplen = ft_strlen(sep);
	if (size == 0)
	{
		dest = malloc(1);
		*dest = 0;
		return (dest);
	}
	while (++i < size)
		allen += ft_strlen(strs[i]);
	dest = (char *)malloc(sizeof(char) * (allen + 1 + (seplen * (size - 1))));
	if (!dest)
		return (NULL);
	else
		ft_cpycpy(size, strs, sep, dest);
	return (dest);
}
