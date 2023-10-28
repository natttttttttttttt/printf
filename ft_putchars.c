/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntsvetko <ntsvetko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:21:41 by ntsvetko          #+#    #+#             */
/*   Updated: 2023/10/28 17:09:41 by ntsvetko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *l)
{
	write(1, &c, 1);
	(*l)++;
}

void	ft_putstr(char *str, int *l)
{
	if (str == NULL)
		str = "(null)";
	while(*str)
	{
		ft_putchar(*str, l);
		str++;
	}
}
