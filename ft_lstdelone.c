
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *)){
	t_list *top_head = lst;
	lst = lst->next;
	del(top_head->content);	
	free(top_head);
	top_head = NULL;
}