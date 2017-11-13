/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 01:02:29 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 02:13:54 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_verif_percent(t_flags *list, int idxtmp)
{
	if (list->format[idxtmp + 1] == '%')
		return (1);
	if (list->format[idxtmp] == '%')
		idxtmp++;
	while (list->format[idxtmp] && list->format[idxtmp] == '%' &&
			ft_isflag(list->format[idxtmp + 1]))
		idxtmp++;
	if (list->format[idxtmp] == '%')
	{
		list->conv = '%';
		return (1);
	}
	return (0);
}
