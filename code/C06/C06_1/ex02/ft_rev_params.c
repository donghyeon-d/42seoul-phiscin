/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:22:37 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/16 10:17:41 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	main(int argc, char **argv)
{
	int	len;

	argc--;
	while (0 < argc)
	{
		len = ft_len(argv[argc]);
		write(1, argv[argc], len);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
