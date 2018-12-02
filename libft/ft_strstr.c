/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 18:09:27 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/02 22:58:47 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, char *needle)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (ft_strncmp(&str[i], needle, ft_strlen(needle)) == 0)
			return ((char*)&str[i]);
		i++;
	}
	return (0);
}
