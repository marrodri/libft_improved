
#include "libft.h"

void ft_printlst(t_list *lst){
	int i = 0;
	while(lst){
		printf("Node i=%d, content:|%s|\n",i,(char*)lst->content);
		i++;
		lst = lst->next;
	}
}

int main(){

	t_list *newNodeA = ft_lstnew((char*)"newNodeA");
	t_list *newNodeB = ft_lstnew((char*)"newNodeB");
	t_list *newNodeC = ft_lstnew((char*)"newNodeC");
	t_list *newNodeD = ft_lstnew((char*)"newNodeD");

	t_list *newNodeW = ft_lstnew((char*)"newNodeW");
	t_list *newNodeX = ft_lstnew((char*)"newNodeX");
	t_list *newNodeY = ft_lstnew((char*)"newNodeY");
	t_list *newNodeZ = ft_lstnew((char*)"newNodeZ");


	// linked list len test
	t_list *l = ft_lstnew(strdup("1"));
	l->next = ft_lstnew(strdup("2"));
	l->next->next = ft_lstnew(strdup("3"));

	ft_lstadd_front(&newNodeA, newNodeB);
	ft_lstadd_front(&newNodeA, newNodeC);
	ft_lstadd_front(&newNodeA, newNodeD);
	printf("add_front test=====\n");
	ft_printlst(newNodeA);
	printf("==================\n");

	ft_lstadd_back(&newNodeW, newNodeX);
	ft_lstadd_back(&newNodeW, newNodeY);
	ft_lstadd_back(&newNodeW, newNodeZ);
	printf("add_back test=====\n");
	ft_printlst(newNodeW);
	printf("==================\n");

	// linked list len
	int actual = ft_lstsize(l);

	printf("====l size is |%d|\n", actual);
}