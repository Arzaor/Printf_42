/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string_minus_space_prec2.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:11:27 by jbarette          #+#    #+#             */
/*   Updated: 2021/03/19 10:05:40 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_treat_string_minus_space_prec5(int width, int char_count)
{
	int		tmp;

	tmp = 0;
	if (width < 0)
		width *= -1;
	tmp = ft_add_space(width - char_count);
	return (tmp);
}
