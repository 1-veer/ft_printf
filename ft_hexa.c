/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:54:27 by abougati          #+#    #+#             */
/*   Updated: 2024/11/24 22:31:04 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexa(unsigned long int n, char *str)
{
	int i;
	int count;
	char buff[16];

	if (n == 0)
		return (ft_putchar('0'));
	i = 0;
	while (n != 0)
	{
		buff[i]=str[n % 16];
		n = n / 16;
		i++;
	}
	count = i;
	while (i)
		ft_putchar(buff[--i]);
	return (count);
}
