/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:21:44 by ahakam            #+#    #+#             */
/*   Updated: 2022/04/01 22:52:57 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check(va_list ptr, char *htr, char c, int *k)
{
	if (c == 'i' || c == 'd')
		ft_putnbr_fd(va_arg(ptr, int), 1, k);
	else if (c == 's')
	{
		htr = va_arg(ptr, char *);
		if (htr == NULL)
			htr = "(null)";
		ft_putstr_fd(htr, 1, k);
	}
	else if (c == 'c')
		ft_putchar_fd(va_arg(ptr, int), 1, k);
	else if (c == 'x')
		ft_hexa(va_arg(ptr, unsigned int), "0123456789abcdef", 16, k);
	else if (c == 'X')
		ft_hexa(va_arg(ptr, unsigned int), "0123456789ABCDEF", 16, k);
	else if (c == 'p')
	{
		ft_putstr_fd("0x", 1, k);
		ft_hexa(va_arg(ptr, unsigned long int), "0123456789abcdef", 16, k);
	}
	else if (c == 'u')
		ft_putnbr_fd(va_arg(ptr, unsigned int), 1, k);
	else
		ft_putchar_fd(c, 1, k);
}

int	ft_printf(const char *str, ...)
{
	char	*htr;
	int		i;
	int		k;
	va_list	ptr;

	htr = NULL;
	i = 0;
	k = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			check(ptr, htr, str[i], &k);
		}
		else
			ft_putchar_fd(str[i], 1, &k);
		i++;
	}
	va_end(ptr);
	return (k);
}
