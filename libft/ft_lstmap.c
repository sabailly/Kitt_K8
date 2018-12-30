#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *next;

	next = NULL;
	while (lst)
	{
		tmp = (t_list*)malloc(sizeof(t_list));
		if (!tmp)
			return (NULL);
		tmp = f(lst);
		tmp->next = next;
		lst = lst->next;
		next = tmp;
	}
	return (tmp);
}