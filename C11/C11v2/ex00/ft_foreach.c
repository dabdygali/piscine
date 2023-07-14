/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:50:37 by dabdygal          #+#    #+#             */
/*   Updated: 2023/03/12 12:06:35 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = 0;
	if (length < 1)
		return ;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
