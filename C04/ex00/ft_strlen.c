/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:52:25 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/01 13:57:29 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Hello";
	printf("str is %d characters long\n",ft_strlen(str));
}*/
