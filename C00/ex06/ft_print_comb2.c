/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:56:44 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/22 23:01:41 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i;
		while (j <= 99)
		{
			if (i != j)
			{
				ft_putchar(i / 10 + '0');
				ft_putchar(i % 10 + '0');
				ft_putchar(' ');
				ft_putchar(j / 10 + '0');
				ft_putchar(j % 10 + '0');
				if (i < 98)
				{
					write(1, ", ", 2);
				}
			}
			j++;
		}
		i++;
	}
}
