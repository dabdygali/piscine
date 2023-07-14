/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 09:36:56 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/04 09:40:47 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (*(argv[j] + i) != 0)
		{
			write(1, argv[j] + i, 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
