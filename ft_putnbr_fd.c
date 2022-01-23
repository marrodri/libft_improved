

#include "libft.h"

int ft_numpow_len(int n){
	int pow = 1;
	if(n < 0){
		n*=-1;
	}
	while(n>=10){
		n /=10;
		pow*=10;
	}
	return (pow);
}

void ft_putnbr_fd(int n, int fd){
	//logic is wrong in big numbers.
	//take your time to fix this.
	char	num_char;
	int		num_pow = 0;
	int		top_num = 0;

	if(n == 0){
		ft_putchar_fd('0', fd);
		return ;
	}
	if(n == 2147483647){
		ft_putstr_fd("2147483647", fd);
		return ;
	}
	if(n == -2147483648){
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if(n < 0){
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	num_pow = ft_numpow_len(n);
	while(n > 0){
		top_num = n/num_pow;
		num_char = top_num + '0';
		ft_putchar_fd(num_char, fd);
		n %= num_pow;
		num_pow /= 10;
	}
	return ;
}
