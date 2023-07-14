/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:14:21 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/28 14:57:49 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] > 90 || str[i] < 65)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>
int		main(void)
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("str is %s\n",str);
	printf("ft_str_is_uppercase returns %d\n",ft_str_is_uppercase(str));
}
