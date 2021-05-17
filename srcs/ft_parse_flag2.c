/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flag2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbarette <jbarette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:46:31 by hterras           #+#    #+#             */
/*   Updated: 2021/03/19 10:05:23 by jbarette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parse_flag2(const char *str, va_list args)
{
	int char_count;

	char_count = 0;
	if (str[g_i] == '0' && str[g_i + 1] == '-')
	{
		g_i += 1;
		char_count += ft_parse_minus(str, args);
	}
	else if (str[g_i] == '0' && str[g_i + 1] == '*')
		char_count += ft_parse_flag_zero_star(str, args);
	else if (str[g_i] == '0' && str[g_i + 1] == '.')
		char_count += ft_parse_flag_zero_dot(str, args);
	else if (str[g_i] == '0')
	{
		g_i += 1;
		char_count += ft_treatment_digit(str, args);
	}
	else if (str[g_i] == '%')
	{
		g_i += 1;
		char_count += ft_putchar('%');
	}
	return (char_count);
}

int		ft_parse_flag_zero_star(const char *str, va_list args)
{
	int		char_count;

	char_count = 0;
	g_i += 1;
	char_count += ft_parse_zero(str, args);
	return (char_count);
}

int		ft_parse_flag_zero_dot(const char *str, va_list args)
{
	int		char_count;

	g_i += 1;
	char_count = 0;
	char_count += ft_parse_dot(str, args);
	return (char_count);
}
