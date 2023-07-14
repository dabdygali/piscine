/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c10ex00.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:18:07 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/11 21:00:06 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C10EX00_H
# define C10EX00_H

# define BUF_SIZE 4096
# define ARGC_MIN 2
# define ARGC_MAX 2
# define ARGC_LOW_MSG "File name missing.\n"
# define ARGC_HIGH_MSG "Too many arguments.\n"

void	ft_put_error(char *str);
int		ft_check_argc(int arg, int min, int max);

#endif
