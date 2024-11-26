/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:46:52 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/26 15:28:43 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_putnbr(int n)
{
	int x = 0;
	long y;
	y = (long)n;
	if(y < 0)
	{
		y *= -1;
		x += ft_putchar('-');
	}
	else if(y > 9)
	{
		x += ft_putnbr(y / 10);
		x += ft_putnbr(y % 10);
	}
	else
	{
		x += ft_putchar(y + 48);
	}
	return(x);
}
int main()
{
	int n = 1000000;
	printf("[%d]\n", ft_putnbr(n));
}