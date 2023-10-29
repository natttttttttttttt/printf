/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntsvetko <ntsvetko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:21:41 by ntsvetko          #+#    #+#             */
/*   Updated: 2023/10/29 17:13:10 by ntsvetko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_next(va_list args, const char *format, int *l)
{
	if (*format == 'c')
		ft_putchar(va_arg(args, int), l);
	else if (*format == 's')
		ft_putstr(va_arg(args, char *), l);
	else if (*format == 'p')
		ft_pointer(va_arg(args, unsigned long), l);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(args, int), l);
	else if (*format == 'u')
		ft_unsigned(va_arg(args, unsigned int), l);
	else if (*format == 'x')
	 	ft_puthex(va_arg(args, unsigned int), 'l', l);
	else if (*format == 'X')
	 	ft_puthex(va_arg(args, unsigned int), 'u', l);;
	if (*format == '%')
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
