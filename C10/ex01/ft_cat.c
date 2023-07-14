/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:43:57 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/15 17:50:38 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/errno.h>
#include "ft_cat.h"

int	main(int argc, char *argv[])
{
	int		i;

	if (argc < 2)
		ft_cat_stdin();
	i = 1;
	while (i < argc)
	{
		if (*argv[i] == '-' && *(argv[i] + 1) == '\0')
		{
			ft_cat_stdin();
			i++;
			continue ;
		}
		ft_cat_file(argv[i]);
		i++;
	}
	if (errno != 0)
		return (1);
	return (errno);
}
