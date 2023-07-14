/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:50:21 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/02 14:10:41 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int		c;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	c = nb;
	while (power-- > 1)
	{
		nb = c * nb;
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_iterative_power(5,3));
}*/
