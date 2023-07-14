/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:53:43 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/02 16:23:34 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int		i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb && i <= 46340)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_sqrt(2147395600));
	return (0);
}*/
