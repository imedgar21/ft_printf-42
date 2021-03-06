/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <imedgar@21-school.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 20:57:07 by imedgar           #+#    #+#             */
/*   Updated: 2020/07/17 20:57:08 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_print_char(char c, t_fl *fl)
{
	int		res;
	char	str[2];

	str[0] = c;
	str[1] = '\0';
	res = 0;
	if (str[0] == '%' && fl->zer && !fl->pdn)
		res += ft_putchars('0', fl->width - 1, str, fl->pdn);
	else if (fl->width > 1)
	{
		if (c == '\0' && fl->pdn)
			res += ft_putchar(c);
		res += ft_putchars(' ', fl->width - 1, str, fl->pdn);
		if (c == '\0' && !fl->pdn)
			res += ft_putchar(c);
	}
	else
		res = ft_putchar(c);
	return (res);
}
