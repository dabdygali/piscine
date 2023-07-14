/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:03:17 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/06 15:00:42 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*a;

	a = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (a == NULL)
		return (NULL);
	ft_strcpy(a, src);
	return (a);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*to_return;
	int				i;

	if (ac < 0)
		return (NULL);
	to_return = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (to_return == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		to_return[i].size = ft_strlen(av[i]);
		to_return[i].str = av[i];
		to_return[i].copy = ft_strdup(av[i]);
		i++;
	}
	to_return[i].str = 0;
	to_return[i].copy = 0;
	return (to_return);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a[] = {"hello", "hi", "good"};
	int		size;

	size = 3;
	t_stock_str		*test;

	test = ft_strs_to_tab(size, a);
	int i = 0;
	while (i <= size)
	{
		printf("No %d:\nSize: %d:\nStr:  %s\n",i,test[i].size,test[i].str);
		printf("Copy: %s\n------------------\n",test[i].copy);
		i++;
	}
	return(0);
}*/
