
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new){
	//add the new list, to the front of the lst.
	if(lst){

		new->next = *lst;
		*lst = new;
	}
}
