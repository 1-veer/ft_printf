/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:14:35 by abougati          #+#    #+#             */
/*   Updated: 2024/11/24 22:22:15 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address(unsigned long int address)
{
	int	count;

	count = 0;
	if (address == 0)
		return (ft_putstr("(nil)"));
	count = count + ft_putstr("0x") + ft_hexa(address, "0123456789abcdef");
	return (count);
}
