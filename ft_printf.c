/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntsvetko <ntsvetko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:21:41 by ntsvetko          #+#    #+#             */
/*   Updated: 2023/10/28 17:10:13 by ntsvetko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_next(va_list args, char *format, int *l)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int), l);
	else if (*format == 's')
		ft_putstr(va_arg(args, char *), l);
	else if (*format == 'p')
		;
	else if (*format == 'd')
		ft_putnbr(va_arg(args, int), l);;
	else if (*format == 'i')
		ft_putnbr(va_arg(args, int), l);
	else if (*format == 'u')
		ft_unsigned(va_arg(args, unsigned int), l);
	else if (*format == 'x')
		;
	else if (*format == 'X')
		;
	else if (*format == '%')
		ft_putchar('%', l);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	l;

	va_start(args, format);
	l = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_next(args, format, &l);
		}
		else
			ft_putchar(*format, &l);
		format++;
	}
	va_end(args);
	return (l);
}