#include "libft.h"

// add back
void ft_lstadd_back(t_list **lst, t_list *new){
	t_list *head = **(&lst);

	while((*lst)->next){
		(*lst) = (*lst)->next;
	}
	(*lst)->next = new;
	*lst = head;
}



