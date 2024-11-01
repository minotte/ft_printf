/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nminotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:14:41 by nminotte          #+#    #+#             */
/*   Updated: 2022/10/27 21:25:45 by nminotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_putnbr_u((n / 10));
		count += ft_putchar((n % 10 + '0'));
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
