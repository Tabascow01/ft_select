/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:09:11 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 01:53:05 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	int				i;
	unsigned char	*cstr;
	unsigned char	chr;

	chr = (unsigned char)c;
	cstr = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		if (cstr[i] == chr)
			return (cstr + i);
		i++;
		n--;
	}
	return (0);
}
