/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:05:49 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/01 11:18:55 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && j < nb)
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
	char	s1[13] = "Hi";
	char	s3[13] = "Hi";
	char	s2[] = "Hello";
	printf("s1 is:\n%s\n\n",s1);
	printf("s2 is:\n%s\n\n",s2);
	ft_strncat(s1,s2,2);
	printf("s1 after ft_strncat is:\n%s\n\n",s1);
	printf("s3 is:\n%s\n\n",s3);
	strncat(s3,s2,2);
	printf("s3 after strncat is:\n%s\n\n",s3);
}*/
