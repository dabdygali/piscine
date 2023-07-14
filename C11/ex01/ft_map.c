/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 12:08:40 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/12 12:21:03 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*to_return;

	i = 0;
	if (length < 1)
		return (NULL);
	to_return = (int *) malloc(sizeof(int) * length);
	if (to_return == NULL)
		return (NULL);
	while (i < length)
	{
		to_return[i] = f(tab[i]);
		i++;
	}
	return (to_return);
}
/*
int	incrm(int a)
{
	return (a + 1);
}

#include <stdio.h>
int	main(void)
{
	int		tab[] = {-3, -2, -1, 0, 1, 2, 3};
	int		length = 7;
	int		*r;
	int		(*f)(int);
	int		i;

	i = 0;
	f = &incrm;
	r = ft_map(tab, length, f);
	while (i < length)
	{
		printf("%d ", r[i]);
		i++;
	}
	return (0);
}*/
