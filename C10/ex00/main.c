/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:41:41 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/11 21:09:39 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "c10ex00.h"

int	main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	if (ft_check_argc(argc, ARGC_MIN, ARGC_MAX) == 0)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_put_error("Cannot read file.\n");
		return (0);
	}
	ret = 1;
	while (ret != 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		if (ret == -1)
		{
			ft_put_error("Cannot read file.\n");
			return (0);
		}
		write(1, buf, ret);
	}
	return (0);
}
