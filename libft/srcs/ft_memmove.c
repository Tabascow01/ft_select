/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:09:33 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 01:54:54 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t n)
{
	char const	*csrc;
	char		*cdest;

	csrc = src;
	cdest = dest;
	if (cdest <= csrc || csrc >= (cdest + n))
	{
		while (n)
		{
			*cdest++ = *csrc++;
			n--;
		}
	}
	else
	{
		csrc = csrc + n - 1;
		cdest = cdest + n - 1;
		while (n)
		{
			*cdest-- = *csrc--;
			n--;
		}
	}
	return (dest);
}
