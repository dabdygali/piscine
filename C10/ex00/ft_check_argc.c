/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:03:00 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/11 18:56:21 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c10ex00.h"

int	ft_check_argc(int arg, int min, int max)
{
	if (arg < min)
	{
		ft_put_error(ARGC_LOW_MSG);
		return (0);
	}
	if (arg > max)
	{
		ft_put_error(ARGC_HIGH_MSG);
		return (0);
	}
	return (1);
}
