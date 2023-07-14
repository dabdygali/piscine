/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:04:45 by dabdygal          #+#    #+#             */
/*   Updated: 2023/02/24 14:58:01 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *p, int size)
{
	int		i;

	i = 0;
	while (i < size - 1 - i)
	{
		*(p + i) = *(p + i) ^ *(p + size - 1 - i);
		*(p + size - 1 - i) = *(p + i) ^ *(p + size - 1 - i);
		*(p + i) = *(p + i) ^ *(p + size - 1 - i);
		i++;
	}
}
