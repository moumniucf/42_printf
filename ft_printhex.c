/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:46:16 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/25 19:02:45 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n, char c)
{
	int i = 0;
	char *arrayuper;
	char *arraylower;
	arraylower = "0123456789abcdef";
	arrayuper = "0123456789ABCDEF";
	if(n < 16 &&c == 'x')
		i += arraylower[n];
	else if(n < 16 && c == 'X')
		i += arrayuper[n];
	else
	{
		i += ft_printhex(n / 16, c);
		i += ft_printhex(n % 16, c);
	}
	return(i);
}
int main()
{
	unsigned int n = 26;
	char c = 'X';
	int x = ft_printhex(n, c);
	printf("%d\n", x);
}