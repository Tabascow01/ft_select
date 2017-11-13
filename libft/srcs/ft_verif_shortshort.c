/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_shortshort.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 00:17:17 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 02:14:12 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isshortshort_allowed(t_flags *list, int idxtmp)
{
	while (list->format[idxtmp] != '%' && list->format[idxtmp]
			&& ft_isflag(list->format[idxtmp]))
	{
		if (list->format[idxtmp + 1] == 'd'
				|| list->format[idxtmp + 1] == 'i'
				|| list->format[idxtmp + 1] == 'o'
				|| list->format[idxtmp + 1] == 'O'
				|| list->format[idxtmp + 1] == 'x'
				|| list->format[idxtmp + 1] == 'X'
				|| list->format[idxtmp + 1] == 'u'
				|| list->format[idxtmp + 1] == 'U'
				|| list->format[idxtmp + 1] == 'p'
				|| list->format[idxtmp + 1] == 'D'
				|| list->format[idxtmp + 1] == 'C'
				|| list->format[idxtmp + 1] == 'S')
			return (1);
		idxtmp++;
	}
	return (0);
}

int		ft_verif_shortshort(t_flags *list, int idxtmp)
{
	while (list->format[idxtmp] != '%' && list->format[idxtmp]
			&& ft_isflag(list->format[idxtmp]))
	{
		if (list->format[idxtmp] == 'h'
				&& list->format[idxtmp + 1] == 'h')
			return (1);
		idxtmp++;
	}
	return (0);
}
