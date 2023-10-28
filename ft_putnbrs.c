/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntsvetko <ntsvetko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:21:41 by ntsvetko          #+#    #+#             */
/*   Updated: 2023/10/28 17:01:29 by ntsvetko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *l)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", l);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', l);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, l);
		ft_putnbr(n % 10, l);
	}
	if (n < 10)
	{
		ft_putchar(n + '0', l);
	}
}

void	ft_unsigned(unsigned int n, int *l)
{
	if (n >= 10)
		ft_unsigned(n / 10, l);
	ft_putchar(n % 10 + '0', l);
}
