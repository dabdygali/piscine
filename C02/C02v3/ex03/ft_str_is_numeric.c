/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:52:16 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/27 12:56:21 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int		main(void)
{
	char str[] = "123456789";
	printf("str is %s\n",str);
	printf("ft_str_is_numeric returns %d\n",ft_str_is_numeric(str));
}*/
