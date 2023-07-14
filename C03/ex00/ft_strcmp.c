/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:39:47 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/28 15:13:56 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int		main(void)
{
	char s1[] = "Hello";
	char s2[] = "Healo";
	int n,my;

	n = strcmp(s1,s2);
	printf("s1 is:\n%s\n\n",s1);
	printf("s2 is:\n%s\n\n",s2);
	printf("n is:\n%d\n\n",n);
	my = ft_strcmp(s1,s2);
	printf("my is:\n%d\n",my);
}*/
