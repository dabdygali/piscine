/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:49:14 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/01 11:03:43 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[13] = "Hello  ";
	char	s2[] = "Hello";
	printf("s1 is:\n%s\n\n",s1);
	printf("s2 is:\n%s\n\n",s2);
	ft_strcat(s1,s2);
	printf("s1 now is:\n%s\n\n",s1);
}*/
