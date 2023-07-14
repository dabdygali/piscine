/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:43:46 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/02 13:02:43 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int		i;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = nb;
	while (i != 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_iterative_factorial(5));
}*/
