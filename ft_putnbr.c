/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:47:36 by abougati          #+#    #+#             */
/*   Updated: 2024/11/24 21:54:04 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_length(int n)
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

int	ft_putnbr(int n)
{
	unsigned int	nbr;
	int count;
	
	count = get_length(n);
	if (n < 0)
	{
		ft_putchar('-');
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	return (count);
}

