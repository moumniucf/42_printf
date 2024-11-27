/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:46:16 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/27 13:14:56 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n, char c)
{
	int		i;
	char	*uper;
	char	*lower;

	i = 0;
	lower = "0123456789abcdef";
	uper = "0123456789ABCDEF";
	if (n < 16 && c == 'x')
		i += ft_putchar(lower[n]);
	else if (n < 16 && c == 'X')
		i += ft_putchar(uper[n]);
	else
	{
		i += ft_printhex(n / 16, c);
		i += ft_printhex(n % 16, c);
	}
	return (i);
}
