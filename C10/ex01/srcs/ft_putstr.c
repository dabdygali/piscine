/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:28:05 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/15 15:54:02 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/errno.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr(char	*str)
{
	int		exit_status;
	char	*err_msg;

	while (*str)
	{
		exit_status = write(1, str, 1);
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
	return ;
}
