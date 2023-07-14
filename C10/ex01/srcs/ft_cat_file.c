/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:30:08 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/15 18:00:22 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/errno.h>
#include "ft_cat.h"

void	ft_err_prefix(char *str)
{
	write(2, "ft_cat: ", 8);
	while (*str)
	{
		write(2, str, 1);
		str++;
	}
	write(2, ": ", 2);
}

void	ft_cat_file(char *str)
{
	int		fd;
	int		bytes_read;
	char	buff[BUFF_SIZE + 1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_err_prefix(str);
		ft_put_error(strerror(errno));
		return ;
	}
	bytes_read = 1;
	while (bytes_read)
	{
		bytes_read = read(fd, buff, BUFF_SIZE);
		if (bytes_read == -1)
		{
			ft_err_prefix(str);
			ft_put_error(strerror(errno));
			return ;
		}
		buff[bytes_read] = '\0';
		ft_putstr(buff);
	}
	close(fd);
}


