/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:59:42 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/28 14:57:19 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] > 122 || str[i] < 97)
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
	char str[] = "abcdefghijklmnopqrstuvwxyZ";
	printf("str is %s\n",str);
	printf("ft_str_is_lowercase returns %d\n",ft_str_is_lowercase(str));
}
