/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:12:03 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/02 14:19:58 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb = nb * ft_recursive_power(nb, --power);
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_recursive_power(5,3));
}*/
