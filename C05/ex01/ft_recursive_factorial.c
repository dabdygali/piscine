/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:42:07 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/02 13:48:33 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_recursive_factorial(4));
}*/
