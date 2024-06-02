#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr_(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}



/*int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[i] == '\0' || base[1] == '\0')
		return (1);
	while (base[i])
	{
		j = i + 1;
		if ((base[i] == '-' || base[i] == '+')
			|| (base[i] <= 32 || base[i] > 126))
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}*/
// void	ft_putnbr_base_unsigned(unsigned long long nb, char *base)??
void	ft_putnbr_base(int nbr, char *base)
{
	int		size_base;
	long	nb;

	size_base = 0;
	nb = nbr;
	if (ft_checkbase(base) == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		while (base[size_base])
			size_base++;
		if (nb < size_base)
			ft_putchar(base[nb]);
		if (nb >= size_base)
		{
			ft_putnbr_base(nb / size_base, base);
			ft_putnbr_base(nb % size_base, base);
		}
	}
}
