/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-iaz <yait-iaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:36:46 by yait-iaz          #+#    #+#             */
/*   Updated: 2021/11/30 17:24:34 by yait-iaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_process(va_list a_list, char c)
{
	int		l;

	l = 0;
	if (c == 'c')
		l += ft_putchar(va_arg(a_list, int));
	else if (c == 's')
		l += ft_putstr(va_arg(a_list, char *));
	else if (c == 'd')
		l += ft_putnbr(va_arg(a_list, int));
	else if (c == 'i')
		l += ft_putnbr(va_arg(a_list, int));
	else if (c == 'u')
		l += ft_putnbr_un(va_arg(a_list, unsigned int));
	else if (c == 'x')
		l += put_hex(va_arg(a_list, int), 87);
	else if (c == 'X')
		l += put_hex(va_arg(a_list, int), 55);
	else if (c == 'p')
		l += put_hex_ad(va_arg(a_list, unsigned long));
	else if (c == '%')
		l += ft_putchar('%');
	return (l);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	va_list		a_list;
	int			l;

	l = 0;
	i = 0;
	va_start(a_list, str);
	while (str[i])
	{
		if (str[i] != '%')
			l += ft_putchar(str[i]);
		else
			l += print_process(a_list, str[++i]);
		i++;
	}
	va_end(a_list);
	return (l);
}
