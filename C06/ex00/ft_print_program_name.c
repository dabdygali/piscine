/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 09:19:00 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/04 09:31:48 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;

	if (argc == 1)
	{
		i = 0;
		while (*(argv[0] + i) != 0)
		{
			write(1, argv[0] + i, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
