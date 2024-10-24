/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nminotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:46:29 by nminotte          #+#    #+#             */
/*   Updated: 2022/10/27 21:45:33 by nminotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_which(char elem, va_list arg)
{
	int	count;

	count = 0;
	if (elem == 'c')
		count += ft_putchar((char)va_arg(arg, int));
	else if (elem == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (elem == 'p')
		count += ft_putaddress(va_arg(arg, unsigned long long));
	else if (elem == 'd' || elem == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (elem == 'u')
		count += ft_putnbr_u(va_arg(arg, unsigned int));
	else if (elem == 'X')
		count += ft_putbase(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (elem == 'x')
		count += ft_putbase(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (elem == '%')
		count += ft_putchar('%');
	else
	{
		count += ft_putchar('%');
		count += ft_putchar((char)elem);
	}
	return (count);
}

static int	ft_loopwrite(const char *src, va_list arg)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		while (src[i] != '%' && src[i])
		{
			count += ft_putchar((char)src[i]);
			i++;
		}
		if (src[i] == '%' && src[i + 1] != '\0')
		{
			i++;
			count += ft_which(src[i], arg);
			i++;
		}
		else if (src[i + 1] == '\0' && src[i] == '%')
		{
			count += ft_putchar((char)src[i]);
			return (count);
		}
	}
	return (count);
}

int	ft_printf(const char *src, ...)
{
	int		count;
	va_list	param_ptr;

	if (!src)
		return (0);
	va_start (param_ptr, src);
	count = 0;
	count = ft_loopwrite(src, param_ptr);
	va_end (param_ptr);
	return (count);
}
