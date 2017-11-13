/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_noconv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 01:13:50 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 02:13:10 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_verif_noconv(t_flags *list, int idxtmp)
{
	if (list->format[idxtmp] == 'Z' || list->format[idxtmp] == 'R')
	{
		list->noconv = 1;
		return (list->format[idxtmp]);
	}
	return (0);
}
