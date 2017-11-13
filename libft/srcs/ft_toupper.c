/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:53:01 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 02:08:19 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *str)
{
	int		i;
	char	*newstr;

	newstr = ft_strnew(ft_strlen(str));
	i = 0;
	while (str[i])
	{
		newstr[i] = ft_toupper(str[i]);
		i++;
	}
	ft_strdel(&str);
	return (newstr);
}

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
