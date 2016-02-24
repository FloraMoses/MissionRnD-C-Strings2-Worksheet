/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int strlen(char*);
int isSpaces(char*);
char* get_last_word(char *str){
	if (strlen(str) == 0 || isSpaces(str)) {
		return "";
	}
	int i = 0, start = 0, end = 0, flag = 0, k = 0;
	char *last_word = NULL;
	while (str[i] != '\0') {
		if (str[i + 1] == '\0') {
			if (str[i] == ' ') {
				start = start - 4;
				end = start + 1;
			}
			else
				end = i;
			last_word = (char*)malloc(sizeof(char)*(end - start + 2));
			for (; start <= end; k++, start++) {
				last_word[k] = str[start];
			}
			last_word[k] = '\0';
			break;
		}
		else if (str[i] == ' ') {
			flag = 1;
			start = i + 1;
		}
		i++;
	}
	return last_word;
}
int strlen(char *str) {
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
int isSpaces(char *str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] != ' ')
			return 0;
		i++;
	}
	return 1;
}