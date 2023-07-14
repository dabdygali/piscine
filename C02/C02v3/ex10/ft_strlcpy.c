/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:33:28 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/28 13:02:00 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (src[i] != 0)
	{
		if (i < size - 1 && size != 0)
		{
			dest[i] = src[i];
		}
		i++;
	}
	if (i < size)
	{
		dest[i] = 0;
	}
	else if (size != 0)
	{
		dest[size - 1] = 0;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "Hello";
	char dest[] = "This is awesome";
	unsigned int n;
	printf("\ndest was:\n%s\n\n",dest);
	n = ft_strlcpy(dest, src, 7);
	printf("dest now is:\n%s\n\n",dest);
	printf("n is:\n%u\n",n);
}*/
