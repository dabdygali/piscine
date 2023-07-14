/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:12:46 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/23 01:03:30 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	negate(int a)
{
	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
		return (a);
	}
	else
	{
		return (a);
	}
}

void	disnumber(char a[10], int b)
{
	int		i;

	i = 0;
	while (i < 10 - b)
	{
		ft_putchar(a[i]);
		i++;
	}
}

void	dispnum(int a)
{
	int		i;
	char	digits[10];
	int		orderofmagnitude;
	int		denom;

	i = 0;
	orderofmagnitude = -1;
	denom = 1000000000;
	while (i < 10)
	{
		if ((a / denom) % 10 != 0 && orderofmagnitude == -1)
		{
			orderofmagnitude = i;
		}
		if (orderofmagnitude != -1)
		{
			digits[i - orderofmagnitude] = (char)((a / denom) % 10) + '0';
		}
		denom = denom / 10;
		i++;
	}
	disnumber(digits, orderofmagnitude);
}

void	ft_putnbr(int nb)
{
	nb = negate(nb);
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb != 0)
	{
		dispnum(nb);
	}
}
