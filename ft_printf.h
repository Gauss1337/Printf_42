/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 23:14:13 by ahakam            #+#    #+#             */
/*   Updated: 2021/12/11 04:08:43 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

void	ft_putnbr_fd(long long nb, int fd, int *k);
void	ft_putstr_fd(char *str, int fd, int *k);
void	ft_putchar_fd(char c, int fd, int *k);
void	ft_hexa(unsigned long int nb, char *str, int base, int *k);
int		ft_printf(const char *str, ...);

#endif
