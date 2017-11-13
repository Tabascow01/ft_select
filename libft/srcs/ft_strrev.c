/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 20:35:56 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 02:07:28 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str, int i)
{
	int		j;
	char	*tmp;

	j = 0;
	tmp = ft_strnew(i);
	i -= 1;
	while (i >= 0)
	{
		tmp[j] = str[i];
		i--;
		j++;
	}
	tmp[j] = '\0';
	ft_strdel(&str);
	str = tmp;
	return (str);
}
