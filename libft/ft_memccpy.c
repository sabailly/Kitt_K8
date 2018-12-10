/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 00:06:27 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/03 16:13:13 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;
	const char *s;
	char *d;

	i = 0;
	s = (const char*)src;
	d = (char*)dest;
	while ((i < n) || (i != c))
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
