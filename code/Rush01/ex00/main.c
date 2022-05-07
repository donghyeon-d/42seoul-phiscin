/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:19:32 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/13 18:54:39 by sanghyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "dfs.h"
#include "init_shape.h"
#include "input_len.h"
#include "free_box.h"

int	main(int argc, char **argv)
{
	char	*input;
	char	**box;
	int		size_box;

	if (argc == 2)
		input = argv[1];
	if (!(argc == 2))
		write(1, "Error\n", 6);
	if (!(argc == 2))
		return (0);
	size_box = input_len(input);
	if (size_box != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	box = init_shape(size_box);
	if (!dfs(0, 0, box, input))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (box != 0)
		free_box(box);
	return (0);
}
