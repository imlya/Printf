#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
size_t	ft_strlen(const char *s);
void	ft_putstr_(char *s);
void	ft_putnbr(int n);
//int		ft_checkbase(char *base);
void	ft_putnbr_base(int nbr, char *base);
int		val_ret(char flag, va_list ap);
int		ft_len(int nbr);
int		ft_print_nb(char flag, va_list ap);

#endif