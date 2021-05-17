/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:49:02 by jbarette          #+#    #+#             */
/*   Updated: 2021/03/19 10:05:30 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr(int n)
{
	unsigned int	nb;
	char			*count_n;
	int				count_nbr;

	count_n = ft_itoa(n);
	count_nbr = ft_strlen(count_n);
	if (n < 0)
		n *= -1;
	nb = (unsigned int)n;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
	free(count_n);
	return (count_nbr);
}
