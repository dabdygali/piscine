/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:16:16 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/12 19:55:32 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_needed_size(int size, char **strs, char *sep)
{
	int		needed_size;
	int		i;

	i = 0;
	needed_size = 0;
	while (i < size)
	{
		needed_size += ft_strlen(*(strs + i));
		i++;
	}
	needed_size += (ft_strlen(sep) * (size - 1)) + 1;
	return (needed_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*to_return;

	if (size <= 0)
	{
		to_return = (char *) malloc(sizeof(char));
		if (to_return == NULL)
			return (NULL);
		*to_return = 0;
		return (to_return);
	}
	to_return = (char *) malloc(sizeof(char) * ft_needed_size(size, strs, sep));
	if (to_return == NULL)
		return (NULL);
	i = 0;
	*to_return = 0;
	while (i < size)
	{
		ft_strcat(to_return, *(strs + i));
		if (i != size - 1)
			ft_strcat(to_return, sep);
		i++;
	}
	return (to_return);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a[5] = {"Hello", "this", "is", "awesome", "project"};
	char	*sep = {"###"};
	char	**strs;
	char	*result;

	strs = a;
	result = ft_strjoin(5, strs, sep);
	printf("%s", result);
}*/
