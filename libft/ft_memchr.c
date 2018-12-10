/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:19:40 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/04 16:07:26 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	char *str;

	i = 0;
	str = (char*)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return(&str[i]);
		i++;
	}
	return (NULL);
}
