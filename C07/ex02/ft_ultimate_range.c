/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 10:35:48 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/05 11:40:54 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		*(*range + i) = min;
		i++;
		min++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int		min;
	int		max;
	int		i;
	int		*r;
	int		**range;
	int		size;

	min = -5;
	max = 5;
	range = &r;
	size = ft_ultimate_range(range, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d ",*(*range + i));
		i++;
	}
	printf("\nSize is %d",size);
	return(0);
}*/
