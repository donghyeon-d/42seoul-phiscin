/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:36:06 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/17 21:29:26 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	setcount(char *str, *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (charset[j] != '\0')
		{
			if (str[i] = charset[j])
			{
				count++;
				break;
			}
			j++;	
		}
		i++;
	}
	return (count);
}

char	**init_box(char **strbox, char *str, char *charset, int count)
{
	int	str_num;
	int	i;
	int	j;
	int	start;
	int	end;

	str_num = setcount(str, charset) + 1 / 2;
	if (!(strbox = malloc(sizeof(char) * str_num)))
		return (NULL);
	i = 0;
	start = 0;
	end = -1;
	while (str[i] != '\0')
	{
		j = 0;
		if (start == i)
		{
			while (charset[j] != '\0' && start == i)
			{
				if (str[i] = charset[j])
					end = i;
			}
			while (charset[j] != '\0' && 
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**strbox
	int		count;

	count = setcount(str, charset);
	strbox = init_box(strbox, str, charset, count);
}
