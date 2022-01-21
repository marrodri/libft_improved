
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *)){
	t_list *top_head = lst;
	// if(lst->next){
	// 	r
	// }
	lst = lst->next;
	//del clear the content of the node;
	del(top_head);	
	//free the memory of head.
	free(top_head);
}