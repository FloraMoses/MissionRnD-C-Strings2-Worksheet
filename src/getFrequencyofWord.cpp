/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int count_word_in_str_way_1(char*, char*);
int count_word_in_str_way_11(char*, char*);
int isSpaces1(char*);
int count_word_in_str_way_1(char *str, char *word){
	if (isSpaces1(str)) {
		return count_word_in_str_way_11(str, word);
	}
	int i1 = 0, j1 = 0, count = 0;
	while (str[i1] != '\0') {
		if (word[j1] == str[i1]) {
			//printf("%c %d\n", str[i1], i1);
			if (word[j1 + 1] == '\0') {
				count++;
				j1 = -1;
				i1--;
			}
			j1++;
		}
		else {
			j1 = 0;
		}
		i1++;
	}
	return count;
}
int count_word_in_str_way_11(char *str, char *word){
	int i1 = 0, j1 = 0, count = 0;
	while (str[i1] != '\0') {
		if (word[j1] == str[i1]) {
			if (word[j1 + 1] == '\0') {
				count++;
				j1 = -1;
			}
			j1++;
		}
		else {
			j1 = 0;
		}
		i1++;
	}
	return count;
}
int isSpaces1(char *str) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] != ' ')
			return 0;
		i++;
	}
	return 1;
}