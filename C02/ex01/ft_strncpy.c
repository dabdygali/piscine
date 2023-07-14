/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:03:56 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/28 14:55:22 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	int					src_end_found;

	src_end_found = 0;
	i = 0;
	while (i < n)
	{
		if (src[i] == '\0' || src_end_found == 1)
		{
			dest[i] = '\0';
			src_end_found = 1;
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "Hello";
	char dest[] = "This is cool";

	printf("src is %s\n",src);
	printf("dest was %s\n",dest);
	ft_strncpy(dest,src,8);
	printf("dest now is %s\n",dest);
}
