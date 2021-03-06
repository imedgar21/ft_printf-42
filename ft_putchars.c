/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedgar <imedgar@21-school.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 20:57:13 by imedgar           #+#    #+#             */
/*   Updated: 2020/07/17 20:57:14 by imedgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_putchars(char c, int nbr, char *str, char pdn)
{
	int res;
	int i;

	i = 0;
	res = 0;
	if (pdn)
	{
		res = ft_putstr(str);
		while (i++ < nbr)
			res += ft_putchar(c);
	}
	else
	{
		while (i++ < nbr)
			res += ft_putchar(c);
		res += ft_putstr(str);
	}
	return (res);
}
