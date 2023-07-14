/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:58:31 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/14 15:51:25 by dabdygal         ###   ########.fr       */
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
	if (*str == 0)
		return (1);
	if (is_sep(str, charset) == 0)
		needed_size++;
	while (*str)
		if (is_sep(str++, charset) && !(is_sep(str, charset)))
			needed_size++;
	if (is_sep(str - 1, charset) == 0)
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
	cpy = (char *) malloc(sizeof(char) * (i + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) && is_sep(str + i, charset) == 0)
	{
		*(cpy + i) = *(str + i);
		i++;
	}
	*(cpy + i) = 0;
	return (cpy);
}

void	ft_fill(char *str, char *charset, char **to_return, int size)
{
	int		i;

	i = 0;
	if (is_sep(str, charset) == 0)
	{
		to_return[i] = cpy_until_sep(str, charset);
		i++;
	}
	while (i < size - 1)
	{
		while (*str)
		{
			if (is_sep(str++, charset) && !(is_sep(str, charset)))
			{
				to_return[i] = cpy_until_sep(str, charset);
				i++;
				while (!(is_sep(str, charset)) && *str)
					str++;
				if (is_sep(str, charset) && *(str + 1) == 0)
					str++;
			}
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**to_return;
	int		size;

	size = calc_needed_size(str, charset);
	to_return = (char **) malloc(sizeof(char *) * size);
	if (to_return == NULL)
		return (NULL);
	if (size == 1)
	{
		*to_return = NULL;
		return (to_return);
	}
	ft_fill(str, charset, to_return, size);
	to_return[size - 1] = NULL;
	return (to_return);
}

#include <stdio.h>
int	main(void)
{
	static char		*test = {"!Hi*Hello!my friend@@@!!how!are you?!"};
	static char		*test_set = {"!@*"};
	char			**result;
	int				i;

	result = ft_split(test, test_set);
	i = 0;
	printf("str:\n%s\n\n",test);
	printf("charset:\n%s\n\n",test_set);
	while (i < calc_needed_size(test, test_set) - 1)
	{
		printf("No %d:\n%s\n--------------------------------\n", i, result[i]);
		i++;
	}
	printf("No %d:\n%p\n--------------------------------\n", i, result[i]);
	return (0);
}
