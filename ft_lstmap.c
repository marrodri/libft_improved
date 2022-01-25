

#include "libft.h"

t_list *ft_lstmap(t_list  *lst, void *(*f)(void *), void (*del)(void*)){
	t_list	*new_mapped_lst = NULL;
	t_list	*new_node;
	void	*new_cont;

	while(lst){
		//check if there's a delete function.
		// if the content is NOT DELETED.
		if(del){
			del(lst->content);
		}
		if(lst->content){
			//apply the function to content.
			new_cont = f(lst->content);
			//create the new node with the new content.
			new_node = ft_lstnew(new_cont);
			// if its the first node of the list, assign it itself.
			if(!new_mapped_lst){
				new_mapped_lst = new_node;
			}
			else{
				ft_lstadd_back(&new_mapped_lst, new_node);
				//add it at the last node.
			}
		}
		lst = lst->next;
	}

	if(!new_mapped_lst){
		return NULL;
	}
	return (new_mapped_lst);
}