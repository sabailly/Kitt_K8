/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 19:56:02 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/17 12:33:09 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	unsigned int	pos;
	unsigned int	i;

	pos = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char*)str);
	while (str[pos] && pos < len)
	{
		if (str[pos] != needle[i] && i > 0)
		{
			pos = pos - i + 1;
			i = 0;
		}
		if (str[pos] == needle[i])
			i++;
		pos++;
		if (i == ft_strlen((char*)needle))
			return ((char*)&str[pos - i]);
	}
	return (NULL);
}
