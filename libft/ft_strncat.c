/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:42:24 by sarbaill          #+#    #+#             */
/*   Updated: 2018/11/30 18:09:10 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int i;
	int offset;

	i = 0;
	offset = 0;
	while(dest[offset])
		offset++;
	while (i < nb && src[i] != '\0')
	{
		dest[offset] = src[i];
		i++;
		offset++;
	}
	dest[offset] = '\0';
	return (dest);
}
