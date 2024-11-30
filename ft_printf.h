/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:20:37 by abougati          #+#    #+#             */
/*   Updated: 2024/11/27 15:25:17 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
char	*ft_strchr(const char *s, int c);
int		which_one(char character, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_hexa(unsigned long int n, char *str);
int		ft_putnbr(int n);
int		ft_address(unsigned long int address);
int		ft_unsigned(unsigned int n);

#endif
