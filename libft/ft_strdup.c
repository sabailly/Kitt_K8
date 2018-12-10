/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:00:31 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/10 17:40:22 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*res;

	len = ft_strlen(src);
	res = (char*)malloc(sizeof(char) * (len + 1));
	ft_strcpy(res, (char *)src);
	return (res);
}
