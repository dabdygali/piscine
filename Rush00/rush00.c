/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshamsid <kshamsid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:25:07 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/26 21:59:43 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw(int width, char left, char middle, char right)
{
	int	index;

	index = 0;
	ft_putchar(left);
	while (index < (width -1))
	{
		ft_putchar(middle);
		index++;
	}
	if (index == (width -1))
	{
		ft_putchar(right);
	}
}

void	rush00(int x, int y)
{
	char	newline;
	int		index;

	index = 0;
	newline = '\n';
	if (y > 0 && x > 0)
	{
		if (y >= 1)
		{
			draw(x - 1, 'o', '-', 'o');
		}
		ft_putchar(newline);
		while (index < (y - 2))
		{
			draw (x - 1, '|', ' ', '|');
			ft_putchar(newline);
			index++;
		}
		if (index == (y - 2))
		{
			draw(x - 1, 'o', '-', 'o');
		}
		ft_putchar('\n');
	}
}
