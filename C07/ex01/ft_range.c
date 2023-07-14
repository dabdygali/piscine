/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 10:00:39 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/05 10:22:13 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*r;
	int		i;

	if (min >= max)
		return (NULL);
	r = (int *) malloc(sizeof(int) * (max - min));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		r[i] = min;
		i++;
		min++;
	}
	return (r);
}
/*
#include <stdio.h>
int	main(void)
{
	int		min;
	int		max;
	int		i;
	int		*r;

	min = 1;
	max = 5;
	r = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ",r[i]);
		i++;
	}
	return(0);
}*/
