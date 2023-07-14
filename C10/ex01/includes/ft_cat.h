/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:40:46 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/15 17:50:30 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# define BUFF_SIZE 1024

void	ft_cat_stdin(void);
void	ft_putstr(char *str);
void	ft_put_error(char *str);
void	ft_cat_file(char *str);

#endif
