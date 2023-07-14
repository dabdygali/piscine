/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:04:03 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/02 17:29:19 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int		i;

	if (nb <= 1)
		nb = 2;
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			nb = ft_find_next_prime(nb + 1);
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_find_next_prime(2147483647));
	return (0);
}*/
