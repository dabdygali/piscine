/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:49:39 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/01 12:48:51 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] == to_find[0])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (to_find[j] == 0)
				{
					return (&str[i]);
				}
			}
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[] = "Hello this is awesome";
	char	s2[] = "this";
	char	*ptr;
	printf("s1 is:\n%s\n\n",s1);
	printf("s2 is:\n%s\n\n",s2);
	ptr = strstr(s1,s2);
	printf("ptr from strstr is:\n%p\n\n",ptr);
	ptr = ft_strstr(s1,s2);
	printf("ptr from ft_strstr is:\n%p\n\n",ptr);
}*/
