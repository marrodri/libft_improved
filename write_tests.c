
#include "libft.h"
#include <time.h>
int main(){


	srand(clock());
	int nbr = rand();

	printf("nbr|%d|\n", nbr);
	printf("putnbr ===\n");
	ft_putnbr_fd(nbr, 0);
	printf("\n======\n");

	
}