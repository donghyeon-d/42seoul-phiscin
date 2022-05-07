/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_validate.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:04:38 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/13 17:05:45 by sanghyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_VALIDATE_H

# define IS_VALIDATE_H

int		right_side(char c, int row, char **box);
int		left_side(char c, int row, char **box);
int		down_side(char c, int col, char **box);
int		up_side(char c, int col, char **box);
int		is_validate(char **box, char *str);

#endif
