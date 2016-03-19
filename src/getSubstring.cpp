/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){
	int k, l = 0;
	char *str1;
	if (str){
		if (i > j){
			return NULL;
		}
		str1 = (char*)malloc(sizeof(char)*j - i + 1);
		for (k = i; k <= j; k++){
			str1[l] = str[k];
			l++;
		}
		str1[l++] = '\0';
		if (str1 != '\0'){
			return str1;
		}
	}
	else return NULL;
}
