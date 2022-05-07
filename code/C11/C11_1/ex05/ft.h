/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:53:15 by dongchoi          #+#    #+#             */
/*   Updated: 2022/02/23 15:56:07 by dongchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# include <unistd.h>
int		ft_what_oper(char *argv[]);
int		input_valid(char *argv[]);
int		ft_isspace(char *str);
int		ft_isnum(char *str);
int		ft_issign(char *str);
int		ft_atoi(char *str);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
void	ft_putchar(int nb);
void	ft_putnbr(int nb);

#endif
