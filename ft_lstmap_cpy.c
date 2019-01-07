/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 16:27:06 by sarbaill          #+#    #+#             */
/*   Updated: 2019/01/04 17:24:48 by sarbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *next;

	next = NULL;
	tmp = next;

	if (!lst)
		return (NULL);
	while (lst)
	{
		tmp->next = (t_list*)malloc(sizeof(t_list));
		if (!tmp->next)
			return (NULL);
		tmp = f(lst);
		lst = lst->next;
		tmp->next = next;
		next = tmp;
	}
	return (tmp);
}
