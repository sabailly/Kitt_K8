/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:22:16 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/03 00:05:46 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			 i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char*)dst;
	s = (const char*)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
