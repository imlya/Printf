#include "ft_printf.h"

int	val_ret(char flag, va_list ap)
{
	int	val;
	char c;

	val = 0;
	if (flag == 'c')
	{
		c = (char)va_arg(ap, int);
		write(1, &val, 1);
	}
	return (val);
}
