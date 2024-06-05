/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:35:05 by imatek            #+#    #+#             */
/*   Updated: 2024/06/05 14:28:01 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_parse(char flag, va_list pa);
int		ft_print_char(va_list pa);
int		ft_print_id(va_list pa);
int		ft_len(int nbr);
int		ft_len_base_unsigned(unsigned long nbr, int base);
void	ft_putnbr(int nb);
int		ft_print_percent(void);
int		ft_print_ptr(va_list pa);
int		ft_print_string(va_list pa);
int		ft_print_hexa(va_list pa, char flag);
int		ft_print_unsigned(va_list pa);
void	ft_putnbr_base_unsigned(unsigned long nb, char *base);
int		ft_strlen(const char *s);
void	ft_putstr(char *s);
void	ft_putchar(char c);

#endif