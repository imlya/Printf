/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:35:05 by imatek            #+#    #+#             */
/*   Updated: 2024/06/03 12:15:49 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_parse(char flag, va_list pa);
void	ft_putchar(char c);
size_t	ft_strlen(const char *s);
void	ft_putstr_(char *s);
//int		ft_checkbase(char *base);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr(int n);
int		ft_len(int nbr);
int		ft_print_nb(char flag, va_list pa);
int		val_ret(char flag, va_list pa);

#endif