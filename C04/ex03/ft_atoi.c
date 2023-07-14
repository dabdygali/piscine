/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:20:38 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/01 20:01:23 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int		i;
	int		s;
	int		d;

	i = 0;
	s = 1;
	d = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		d = (d * 10) + (str[i] - '0');
		i++;
	}
	return (d * s);
}
/*
#include <stdio.h>
int main(void)
{
	char a[] = "   		--++++-569aa889";
	printf("%d",ft_atoi(a));
}*/
