/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntsvetko <ntsvetko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:21:41 by ntsvetko          #+#    #+#             */
/*   Updated: 2023/10/28 17:02:51 by ntsvetko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stddef.h>

void	ft_next(va_list args, char *format, int *l);
void	ft_putchar(char c, int *l);
void	ft_putnbr(int n, int *l);
void	ft_unsigned(unsigned int n, int *l);
int		ft_printf(const char *format, ...);

#endif