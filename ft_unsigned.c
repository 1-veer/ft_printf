/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:25:19 by abougati          #+#    #+#             */
/*   Updated: 2024/11/24 22:28:43 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	len += (n < 0);
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_unsigned(unsigned int n)
{
	int count;
	
	count = get_len(n);
	if (n < 0)
	{
		ft_putchar('-');
		n*= -1;
	}
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (count);
}
