

/*
** ft_strlen
** input: allocated string
** output: it returns the total length of a string. 
*/

int ft_strlen(char *str){
	int str_len;

	str_len = 0;

	while(str[str_len]){
		str_len++;
	}
	return str_len;
}