/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshamsid <kshamsid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:47:20 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/26 22:01:53 by dabdygal         ###   ########.fr       */
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

void	rush02(int x, int y)
{
	char	newline;
	int		index;

	newline = '\n';
	index = 0;
	if (y > 0 && x > 0)
	{
		if (y >= 1)
		{
			draw (x - 1, 'A', 'B', 'A');
		}
		ft_putchar(newline);
		while (index < (y - 2))
		{
			draw(x - 1, 'B', ' ', 'B');
			ft_putchar(newline);
			index++;
		}
		if (index == (y - 2))
		{
			draw (x - 1, 'C', 'B', 'C');
		}
		ft_putchar('\n');
	}
}
