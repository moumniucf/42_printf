/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:02:24 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/26 11:45:02 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_putstr(char *s)
{
	if(!s)
		s = "0";
	int i = 0;
	while(*s)
	{
		printf("==> %s\n", s);
		i = ft_putchar(*s++);
		// printf("<== %s\n", s);

	}
	return(i);
}
int main()
{
	char *s = "youssef";
	printf("%d\n", ft_putstr(s));
}