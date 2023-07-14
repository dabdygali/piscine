/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:21:28 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/12 13:40:03 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab != NULL)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}
/*
int	test(char *a)
{
	if (*a == 48)
		return (1);
	return (0);
}
#include <stdio.h>
int	main(void)
{
	char	*tab[4] = {"Hello", "good", "0wow"};
	int		(*f)(char*);

	f = &test;
	tab[3] = NULL;
	printf("%d ", ft_any(tab, f));
	return (0);
}*/
