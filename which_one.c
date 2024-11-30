/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:04:31 by abougati          #+#    #+#             */
/*   Updated: 2024/11/28 22:19:32 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	which_one(char format_specifier, va_list args)
{
	if (format_specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format_specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format_specifier == 'd' || format_specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format_specifier == 'x')
		return (ft_hexa(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format_specifier == 'X')
		return (ft_hexa(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format_specifier == 'p')
		return (ft_address(va_arg(args, unsigned long)));
	else if (format_specifier == 'u')
		return (ft_unsigned(va_arg(args, unsigned int)));
	else if (format_specifier == '%')
		return (ft_putchar('%'));
	return (0);
}
