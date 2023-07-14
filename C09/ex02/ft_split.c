/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:58:31 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/08 16:26:38 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char *c, char *charset)
{
	while (*charset)
		if (*c == *charset++)
			return (1);
	return (0);
}

int	calc_needed_size(char *str, char *charset)
{
	int		needed_size;

	needed_size = 0;
	while (*str)
		if (is_sep(str++, charset) && !(is_sep(str, charset)))
			needed_size++;
	return (needed_size);
}

char	*cpy_until_sep(char *str, char *charset)
{
	int		i;
	char	*cpy;

	i = 0;
	while (!(is_sep(str + i, charset)) && *(str + i))
		i++;
	if (*(str + i) == 0)
		return (NULL);
	cpy = (char *) malloc(sizeof(char) * i);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (!(is_sep(str + i, charset)))
	{
		*(cpy + i) = *(str + i);
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}

char	**ft_split(char *str, char *charset)
{
	char	**to_return;
	int		size;
	int		i;

	size = calc_needed_size(str, charset);
	if (size <= 1)
		return (NULL);
	to_return = (char **) malloc(sizeof(char *) * size);
	if (to_return == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*str)
		{
			if (is_sep(str++, charset) && !(is_sep(str, charset)))
			{
				to_return[i] = cpy_until_sep(str, charset);
				i++;
				while (!(is_sep(str, charset)) && *str)
					str++;
			}
		}
	}
	return (to_return);
}
/*
#include <stdio.h>
int	main(void)
{
	static char		*test = {"Hi!Hello*word*another word@***@!good@luck!friend"};
	static char		*test_set = {"*!@"};
	char			**result;
	int				i;

	result = ft_split(test, test_set);
	i = 0;
	printf("str:\n%s\n\n",test);
	printf("charset:\n%s\n\n",test_set);
	while (i < calc_needed_size(test, test_set))
	{
		printf("No %d:\n%s\n--------------------------------\n", i, result[i]);
		i++;
	}
	return (0);
}*/
