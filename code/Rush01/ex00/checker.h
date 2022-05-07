/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyel <sanghyel@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:19:51 by sanghyel          #+#    #+#             */
/*   Updated: 2022/02/13 16:57:43 by sanghyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H

# define CHECKER_H

int		check_col(int col, int value, char **box);
int		check_row(int row, int value, char **box);

#endif
