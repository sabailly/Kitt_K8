/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 19:56:02 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/10 19:01:35 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (ft_strncmp(&str[i], needle, ft_strlen(needle)) == 0)
			return ((char*)&str[i]);
		i++;
	}
	return (0);
}
