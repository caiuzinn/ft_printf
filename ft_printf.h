/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cda-silv </var/mail/cda-silv>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 20:27:29 by cda-silv          #+#    #+#             */
/*   Updated: 2020/09/10 20:27:31 by cda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"

/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
** HEADERS
*/
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include "../libft/libft.h"
# include <inttypes.h>

/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
** MACROS
*/
# define FLAGS		"-+#0 "
# define ALL_FL		"-+#0 *.0123456789lh"
# define FSPECS		"cspdiuxX%onfge"

# define DIGITS		"0123456789"
# define HEXLOW	    "0123456789abcdef"
# define HEXUP  	"0123456789ABCDEF"
# define OCT		"01234567"

/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
** STRUCT DECLARATIONS
*/
typedef struct s_flags
{
    char    set[20];
    char    spe_c;
    char    pad_c;
    char    minus;
    char    plus;
    char    space;
    char    hash;
    int     width;
    char    point;
    int     precision;
    char    length;
    char    print_n0;
    char    sign;
    unsigned long long int ulli;
    long long int lli;
    long double f;
    int     e_nbr;
    char    *a;
    char    *d;
    char    e[5];
    char    *tmp;
    int     size;
    size_t  strlen;
} t_flags;

/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
** MAIN FUNCTIONS
*/
int				ft_printf(const char *str, ...);

/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
** UTILS FUNCTIONS
*/

int ft_strchr_ok(char *s, char c);

#endif