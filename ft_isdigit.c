
/*
** usage: ft_isdigit(int c)
** it checks the input and returns 1 if the character is a number;
**    otherwise, it returns a 0.
** ascii values: 48 = '0', 57 = '9'
*/
int ft_isdigit(int c){
	char unsigned_char = (char)c;
	if((unsigned_char >= '0' && unsigned_char <= '9')){
		return (1);
	}
	return (0);
}