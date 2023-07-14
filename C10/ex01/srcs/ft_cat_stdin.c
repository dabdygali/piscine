/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_stdin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:40:23 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/15 16:00:04 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/errno.h>
#include <string.h>
#include "ft_cat.h"

void	ft_cat_stdin(void)
{
	char	buff[BUFF_SIZE + 1];
	int		bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(0, buff, BUFF_SIZE);
		if (bytes_read == -1)
		{
			ft_put_error(strerror(errno));
			return ;
		}
		buff[bytes_read] = '\0';
		ft_putstr(buff);
	}
	return ;
}
