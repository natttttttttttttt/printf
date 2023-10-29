/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntsvetko <ntsvetko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:21:41 by ntsvetko          #+#    #+#             */
/*   Updated: 2023/10/29 15:54:33 by ntsvetko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long nbr, char cases, int *l)
{
	char	*base_u;
	char	*base_l;
	
	base_u = "0123456789ABCDEF";
	base_l = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, cases, l);
		ft_puthex(nbr % 16, cases, l);
	}
	else
	{
		if (cases == 'u')
			ft_putchar(base_u[nbr], l);
		else if (cases == 'l')
			ft_putchar(base_l[nbr], l);
	}
}

void	ft_pointer(unsigned long ptr, int *l)
{
	if (ptr == 0)
		ft_putstr("(nil)", l);
	else
	{
		ft_putstr("0x", l);
		ft_puthex(ptr, 'l', l);
	}
}
