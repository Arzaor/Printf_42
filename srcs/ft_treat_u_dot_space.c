/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_u_dot_space.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:08:11 by jbarette          #+#    #+#             */
/*   Updated: 2021/03/19 10:05:42 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_treat_u_dot_space(unsigned int nbr, int width)
{
	int		i;
	int		char_count;
	char	*nbrc;
	int		diff;

	diff = 0;
	i = 0;
	char_count = 0;
	nbr = (unsigned int)(4294967295 + 1 + nbr);
	nbrc = ft_u_itoa(nbr);
	diff = width - ft_strlen(nbrc);
	char_count += ft_add_space(diff);
	if (nbr != 0)
	{
		if (nbr < 0)
			char_count += ft_putchar('-');
		if (nbr < 0)
			i -= 1;
		char_count += ft_putnbr(nbr);
	}
	else
		char_count += ft_add_space(1);
	free(nbrc);
	return (char_count);
}
