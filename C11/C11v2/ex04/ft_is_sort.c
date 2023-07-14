/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 14:10:05 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/12 15:21:19 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		order;

	if (length < 3)
		return (1);
	order = 0;
	while (length > 1)
	{
		if (f(*tab, *(tab + 1)) != 0)
		{
			if (order < 0 && f(*tab, *(tab + 1)) > 0)
				return (0);
			if (order > 0 && f(*tab, *(tab + 1)) < 0)
				return (0);
			order = f(*tab, *(tab + 1));
		}
		length--;
		tab++;
	}
	return (1);
}
/*
int	test(int a, int b)
{
	if (a != b)
		return (a - b);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int		tab[] = {1, 2, 3, 4};
	int		length = 2;
	int		(*f)(int, int);

	f = &test;
	printf("%d\n", ft_is_sort(tab, length, f));
	return (0);
}*/
