/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-iaz <yait-iaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:44:16 by yait-iaz          #+#    #+#             */
/*   Updated: 2021/11/30 17:02:09 by yait-iaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	long	num;
	int		l;

	num = n;
	l = 0;
	if (num < 0)
	{
		l = ft_putchar('-');
		num *= -1;
	}
	l += num_l(num);
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
	}
	return (l);
}

int	ft_putnbr_un(unsigned int num)
{
	int	l;

	l = num_l(num);
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
	}
	return (l);
}

int	num_l(long n)
{
	int	l;

	l = 1;
	while (n > 9)
	{
		n = n / 10;
		l++;
	}
	return (l);
}
