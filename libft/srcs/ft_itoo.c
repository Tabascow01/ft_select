/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 07:44:00 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 01:50:13 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoo(int num)
{
	char		*str;
	long int	i;
	int			res;
	long int	octal;

	res = 0;
	i = 1;
	while (num != 0)
	{
		res = num % 8;
		num = num / 8;
		octal = octal + (res * i);
		i = i * 10;
	}
	str = ft_litoa_base(octal, 10);
	return (str);
}
