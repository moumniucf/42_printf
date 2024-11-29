/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:12:06 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/28 17:20:06 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <libc.h>
# include <stdarg.h>

int	ft_printf(const char *rst, ...);
int	ft_putchar(char c);
int	ft_printhex(unsigned int n, char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int n);
int	ft_putpoint(unsigned long int n);
int	ft_putprc(char s);

#endif