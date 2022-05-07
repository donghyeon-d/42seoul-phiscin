/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:51:41 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/14 20:14:55 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;

	if (argc > 0)
	{
		len = 0;
		while (argv[0][len] != '\0')
			len++;
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
	return (0);
}
