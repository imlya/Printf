#include "ft_printf.h"

int ft_parse(char flag, va_list pa)
{
    int val;

    val = 0;
    if (flag == 'c')
        val = ft_print_ (pa);
    else if (flag == 's')
        val = ft_print_ (pa);
    else if (flag == 'p')
        val = ft_print_ (pa);
    else if (flag == 'u')
        val = ft_print_ (pa);
    else if (flag == 'i' || flag == 'd')
        val = ft_print_ (pa);
    else if (flag == 'x' || flag == 'X')
        val = ft_print_ (pa);
    else if (flag == '%')
        val = ft_print_ (pa);
    else
        val = 
    va_end(pa);
    return (val);
}