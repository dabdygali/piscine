/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:46:47 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/12 13:57:08 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		count;

	if (length < 1)
		return (0);
	count = 0;
	while (length > 0)
	{
		if (f(*tab) != 0)
			count++;
		tab++;
		length--;
	}
	return (count);
}
/*
int	test(char *a)
{
	if (*a == '0')
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*tab[4] = {"Hello", "0good", "0wow", "0cool"};
	int		(*f)(char*);
	int		length = 4;

	f = &test;
	printf("%d\n", ft_count_if(tab, length, f));
	return (0);
}*/
