/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:22:30 by sarbaill          #+#    #+#             */
/*   Updated: 2018/12/10 18:49:39 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *str)
{
	int i;

	i = 0;
	if (str)
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}
