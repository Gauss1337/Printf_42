/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:12:13 by ahakam            #+#    #+#             */
/*   Updated: 2021/12/11 04:28:22 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned long int nb, char *str, int base, int *k)
{
	if (nb >= (unsigned long int) base)
		ft_hexa(nb / base, str, base, k);
	ft_putchar_fd(str[nb % base], 1, k);
}
