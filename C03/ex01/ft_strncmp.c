/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:15:26 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/01 17:03:33 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
	{
		i--;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hemlo";
	int n;
	int x = 29;
	n = ft_strncmp(s1,s2,x);
	printf("s1 is:\n%s\n\n",s1);
	printf("s2 is:\n%s\n\n",s2);
	printf("n is:\n%d\n",n);
	printf("strncmp is:\n%d\n",strncmp(s1,s2,x));
}*/
