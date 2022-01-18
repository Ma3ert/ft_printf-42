/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-iaz <yait-iaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:36:14 by yait-iaz          #+#    #+#             */
/*   Updated: 2021/11/30 17:26:54 by yait-iaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	put_hex(unsigned int num, int low_up)
{
	char	temp[50];
	int		mod;
	int		i;

	i = 0;
	mod = 0;
	if (num == 0)
		return (ft_putchar('0'));
	while (num != 0)
	{
		mod = num % 16;
		if (mod < 10)
			temp[i++] = mod + 48;
		else
			temp[i++] = mod + low_up;
		num = num / 16;
	}
	temp[i--] = '\0';
	while (i >= 0)
		ft_putchar(temp[i--]);
	return (ft_strlen(temp));
}

int	put_hex_ad(unsigned long num)
{
	int		i;
	char	temp[50];
	int		mod;

	i = 0;
	write (1, "0x", 2);
	if (num != 0)
	{
		while (num != 0)
		{
			mod = num % 16;
			if (mod < 10)
				temp[i++] = mod + 48;
			else
				temp[i++] = mod + 87;
			num = num / 16;
		}
		temp[i] = '\0';
	}
	else
		return (ft_putchar('0') + 2);
	while (i--)
		ft_putchar(temp[i]);
	return (2 + ft_strlen(temp));
}

int	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}
