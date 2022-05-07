/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:36:06 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/21 15:57:52 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_issep(char c, char *charset);
int		ft_wordlen(char *str, char *charset);
char	*ft_word(char *str, char *charset);
int		ft_string_count(char *str, char *charset);

int	ft_issep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (ft_issep(str[i], charset))
		i++;
	while (!ft_issep(str[i], charset) && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_word(char *str, char *charset)
{
	int		i;
	int		wordlen;
	char	*dest;

	i = 0;
	wordlen = ft_wordlen(str, charset);
	dest = (char *)malloc(sizeof(char) * (wordlen + 1));
	if (dest == 0)
		return (NULL);
	while (i < wordlen)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_string_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (charset == 0)
		return (1);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_issep(str[i], charset))
			i++;
		if (str[i] != '\0' && !(ft_issep(str[i], charset)))
			count++;
		while (str[i] != '\0' && !(ft_issep(str[i], charset)))
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		stringcount;
	int		i;

	i = 0;
	stringcount = ft_string_count(str, charset);
	result = (char **)malloc(sizeof(char *) * (stringcount + 1));
	if (result == 0)
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && ft_issep(*str, charset))
			str++;
		if (*str != '\0')
		{
			result[i] = ft_word(str, charset);
			i++;
		}
		while (*str != '\0' && !(ft_issep(*str, charset)))
			str++;
	}
	result[i] = 0;
	return (result);
}
