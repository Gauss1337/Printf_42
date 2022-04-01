/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 22:07:42 by ahakam            #+#    #+#             */
/*   Updated: 2021/12/11 04:05:08 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(long long nb, int fd, int *k)
{
	unsigned long int	n;

	if (nb < 0)
	{
		n = -nb;
		ft_putchar_fd('-', fd, k);
	}
	else
		n = nb;
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd, k);
		ft_putnbr_fd((n % 10), fd, k);
	}
	else
		ft_putchar_fd(n + 48, fd, k);
}
