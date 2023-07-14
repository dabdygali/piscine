/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:48:09 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/13 11:47:01 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c11ex05.h"

void	ft_init(t_op_pair *f)
{
	f[0].operator_sign = '+';
	f[0].operation = ft_sum;
	f[1].operator_sign = '-';
	f[1].operation = ft_subtract;
	f[2].operator_sign = '*';
	f[2].operation = ft_multiplicate;
	f[3].operator_sign = '/';
	f[3].operation = ft_divide;
	f[4].operator_sign = '%';
	f[4].operation = ft_modulo;
}

int	check_args(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (*(argv[2] + 1) != '\0')
	{
		ft_putstr("0\n");
		return (0);
	}
	if (ft_atoi(argv[3]) == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		if (*argv[2] == '/')
			ft_putstr("Stop : division by zero\n");
		if (*argv[2] == '%')
			ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_op_pair	f[5];
	int			i;

	if (check_args(argc, argv) == 0)
		return (0);
	ft_init(f);
	i = 0;
	while (i < 5)
	{
		if (*argv[2] == f[i].operator_sign)
		{
			ft_putnbr(f[i].operation(ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putstr("\n");
			return (0);
		}
		i++;
	}
	ft_putstr("0\n");
	return (0);
}
