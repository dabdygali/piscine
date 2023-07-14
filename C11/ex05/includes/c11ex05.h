/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c11ex05.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:03:18 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/12 19:58:48 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C11EX05_H
# define C11EX05_H

typedef struct s_op_pair
{
	char	operator_sign;
	int		(*operation)(int, int);
}	t_op_pair;

int		ft_atoi(char *str);
int		ft_sum(int a, int b);
int		ft_subtract(int a, int b);
int		ft_multiplicate(int a, int b);
int		ft_divide(int a, int b);
int		ft_modulo(int a, int b);
int		ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif
