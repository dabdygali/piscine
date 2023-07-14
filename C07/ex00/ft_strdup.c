/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:57:03 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/05 09:46:15 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*a;

	a = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (a == NULL)
		return (NULL);
	ft_strcpy(a, src);
	return (a);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	a[] = "Hello";
	char	*c;
	char	*t;
	
	c = ft_strdup(a);
	printf("%s",c);
	t = strdup(a);
	printf("\n%s",t);
	return (0);
}*/
