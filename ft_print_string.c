/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:48:52 by imatek            #+#    #+#             */
/*   Updated: 2024/06/04 15:24:43 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(va_list pa)
{
	char	*val;
	int		i;

	i = 0;
	val = va_arg(pa, char *);
	if (!val)
		return (0);
	ft_putstr(val);
	return (ft_strlen(val));
}
