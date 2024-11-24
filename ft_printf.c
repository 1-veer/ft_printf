/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:35:15 by abougati          #+#    #+#             */
/*   Updated: 2024/11/24 20:01:34 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list args;
	int index;
	int count;

	if (!s || write(1, 0 ,0) == -1)
		return (-1);
	index = 0;
	count = 0;
	va_start(args , s);
	while(s[index])
	{
		 if(s[index] == '%')
		 {
			index++;
			count = count + which_one(s[index] , args);
		 }
		 else
			 count = count + ft_putchar(s[index]);
		index++; 
	}
	va_end(args);
	return (count);
}
