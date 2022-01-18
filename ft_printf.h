/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-iaz <yait-iaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:32:36 by yait-iaz          #+#    #+#             */
/*   Updated: 2021/11/30 15:55:26 by yait-iaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdlib.h>
# include<stdio.h>
# include<stdarg.h>
# include<unistd.h>

int		ft_printf(const char *str, ...);
int		print_process(va_list a_list, char c);
int		ft_putnbr_un(unsigned int num);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		num_l(long n);
int		put_hex(unsigned int num, int low_up);
int		put_hex_ad(unsigned long num);
int		ft_strlen(const char *s);

#endif