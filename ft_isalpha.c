
/*
** usage: ft_isalpha(int c)
** it checks the input and returns 1 if its alphabetic letter;
**    otherwise, it returns a 0.
** ascii values: 65 = A, 90 = Z; 97 = a, 122 = z
*/
int ft_isalpha(int c){
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
		return (1);
	}
	return (0);
}