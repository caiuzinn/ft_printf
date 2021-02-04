/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv </var/mail/cda-silv>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:27:17 by cda-silv          #+#    #+#             */
/*   Updated: 2020/09/10 20:27:23 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int                 ft_printf(const char *format, ...)
{
    va_list args;
    int     len;
    int     i;
    char    teste1;
    char    teste2;

    va_start(args, format);

    teste1 = va_arg(args, char);
    teste2 = va_arg(args, char);

    printf("%c", teste1);
    printf("%c", teste2);

    len = 0;
    i = 0;
    while (format[i] != '\0')
    {
        if (format[i] != '%')
            ft_putchar_len(format[i++], &len);
        else
        {
            i++;
            ft_putchar_len(va_arg(args, char));
            //get_fspecs(args, format, &len, &i);
            if (len == -1)
                return (-1);
        }
    }
    va_end(args);
    return (len);
}
