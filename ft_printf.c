/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 18:35:15 by abougati          #+#    #+#             */
/*   Updated: 2024/11/28 23:01:29 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		index;
	int		count;

	if (!s)
		return (-1);
	index = 0;
	count = 0;
	va_start(args, s);
	while (s[index])
	{
		if (s[index] == '%' && s[index + 1]
			&& ft_strchr("cspdiuxX%", s[index + 1]))
		{
			index++;
			count = count + which_one(s[index], args);
		}
		else if (s[index] == '%' && s[index + 1] == '\0')
			return (ft_putchar(s[index]), -1);
		else
			count = count + ft_putchar(s[index]);
		index++;
	}
	va_end(args);
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
