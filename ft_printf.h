/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 01:12:53 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/11/14 09:50:16 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
#define MAIN_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int ft_printf(const char *s, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_puthex(unsigned long n, int cases);
int ft_putptr(void *ptr);
int	ft_putnbr(int n);
int ft_putunsigned(unsigned int n);

#endif