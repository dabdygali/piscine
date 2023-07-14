/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:42:20 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/28 16:52:16 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*strcap(char *str, int i)
{
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
	}
	return (str);
}

char	*strlow(char *str, int i)
{
	if (str[i] >= 65 && str[i] <= 90)
	{
		str[i] += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	strcap(str, 0);
	while (str[i] != 0)
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			if (str[i -1] < 48 || (str[i -1] > 90 && str[i -1] < 97) || i == 0)
			{
				strcap(str, i);
			}
			else
			{
				strlow(str, i);
			}
			if (str[i - 1] > 57 && str[i - 1] < 65)
			{
				strcap(str, i);
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int		main(void)
{
	char str[] = "salut, coMMent Tu vas ? 40Mots 9quarante-deux; cinquante+et+un";
	printf("\nstr was:\n%s\n\n",str);
	ft_strcapitalize(str);
	printf("after ft_strcapitalize str is:\n%s\n\n",str);
}*/
