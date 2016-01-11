/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int index1,index;
	char *res;
	if (str)
	{
		for (index1 = index = 0; str[index] != '\0'; index++)
		{
			if (str[index] == ' '&&str[index + 1] != ' '&&str[index + 1] != '\0')
				index1 = index + 1;
		}
		res = (char *)malloc(sizeof(char)*(index - index1 + 2));
		for (index = 0; str[index1] != ' '&&str[index1] != '\0'; index++)
			res[index] = str[index1++];
		res[index] = '\0';
		return res;
	}
	return NULL;
}
