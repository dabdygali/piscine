/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 12:42:39 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/15 17:27:58 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/errno.h>
#include <string.h>
#include <unistd.h>

void	ft_put_error(char *str)
{
	int		exit_status;
	char	*err_msg;

	while (*str)
	{
		exit_status = write(2, str, 1);
		if (exit_status == -1)
		{
			err_msg = strerror(errno);
			while (*err_msg)
			{
				write(2, err_msg, 1);
				err_msg++;
			}
			return ;
		}
		str++;
	}
	write(2, "\n", 1);
	return ;
}
