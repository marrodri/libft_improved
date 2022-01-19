

#include "libft.h"


void ft_printlst(t_list *lst){
	int i = 0;
	while(lst){
		printf("Node i=%d, content:|%s|",(char*)lst->content);
		i++;
		lst = lst->next;
	}
}