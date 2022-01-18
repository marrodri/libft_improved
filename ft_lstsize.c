
#include "libft.h"

int ft_lstsize(t_list *lst){
	int lst_len = 0;
	t_list *curr_lst = lst;

	while(curr_lst){
		lst_len++;
		curr_lst = curr_lst->next;
	}

	return lst_len;
}