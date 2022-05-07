/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:51:53 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/14 13:07:35 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (dest_len >= size || size == 0)
		return (src_len + size);
	while (dest_len + i < size && src[i] != '\0')
	{
		if (i < src_len) // src 붙여넣을 자리가 부족할 때:
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i - 1] = '\0';
	return (dest_len + src_len);
}
