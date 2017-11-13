/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:53:06 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 02:08:13 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(char *str)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = ft_strnew(ft_strlen(str));
	while (str[i])
	{
		newstr[i] = ft_tolower(str[i]);
		i++;
	}
	ft_strdel(&str);
	return (newstr);
}

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
