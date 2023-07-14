/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:02:01 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/22 22:30:29 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int a, int b, int c)
{
	char	q;
	char	w;
	char	e;

	q = a + '0';
	w = b + '0';
	e = c + '0';
	ft_putchar(q);
	ft_putchar(w);
	ft_putchar(e);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j +1;
			while (k <= 9)
			{
				ft_print_numbers(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
