/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:10:54 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/27 18:16:32 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *form, ...)
{
	int			i;
	int			x;
	va_list		lst;

	va_start (lst, form);
	x = 0;
	i = 0;
	while (form[i])
	{
		if (*form == '%')
		{
			if (form[i] == 's')
				x += ft_putstr(va_arg(lst, char *));
			else if (form[i] == 'd' || form[i] == 'i' || form[i] == 'u')
				x += ft_putnbr(va_arg(lst, int));
			else if (form[i] == 'x' || form[i] == 'X')
				x += ft_printhex(va_arg(lst, int), form[i]);
			else if (form[i] == 'c')
				x += ft_putchar(va_arg(lst, int));
			// else if (form[i] == 'p')
				// x =+ 
		}
		i++;
	}
	return (va_end(lst), x);
}

int main()
{
	int *p;
	printf("%p\n", p);
	ft_printf("%p\n", p);
}