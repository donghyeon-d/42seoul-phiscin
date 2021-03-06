/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:18:25 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/13 17:00:33 by sanghyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_box(char **box)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(box[i]);
		i++;
	}
	free(box);
}
