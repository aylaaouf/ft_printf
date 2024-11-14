/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylaaouf <aylaaouf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 01:19:15 by aylaaouf          #+#    #+#             */
/*   Updated: 2024/11/14 07:04:05 by aylaaouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int ft_printf(const char *s, ...)
{
    va_list args;
    int i;
    int count;

    va_start(args, s);
    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == '%')
        {
            i++;
            if (s[i] == 'c')
                count += ft_putchar(va_arg(args, int));
            else if (s[i] == 's')
                count += ft_putstr(va_arg(args, char *));
            else if (s[i] == 'p')
                count += ft_putptr(va_arg(args, void *));
            else if (s[i] == 'd' || s[i] == 'i')
                count += ft_putnbr(va_arg(args, int));
            else if (s[i] == 'u')
                count += ft_putunsigned(va_arg(args, unsigned int));
            else if (s[i] == 'x')
                count += ft_puthex(va_arg(args, unsigned int), 0);
            else if (s[i] == 'X')
                count += ft_puthex(va_arg(args, unsigned int), 1);
            else if (s[i] == '%')
                count += ft_putchar('%');
        }
        else
        {
            count += ft_putchar(s[i]);
        }
        i++;
    }
    va_end(args);
    return (count);
}