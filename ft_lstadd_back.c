#include "libft.h"

// seems to work
void ft_lstadd_back(t_list **lst, t_list *new){
	if(!*lst && new){
		*lst = new;
	}
	else{
		// lstlast
		if(!*lst || !new){
			return ;
		}
		t_list *head = **(&lst);
		while((*lst)->next){
			(*lst) = (*lst)->next;
		}
		(*lst)->next = new;
		*lst = head;
	}
}



