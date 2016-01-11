/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int index, index2, count;
	if (str&&word)
	{
		for (index = count = 0; str[index] != '\0'; index++)
		{
			for (index2 = 0; word[index2] != '\0'&&str[index + index2] != '\0'; index2++)
			{
				if (str[index + index2] == word[index2])
				{
					if (word[index2 + 1] == '\0')
						count++;
				}
				else
					break;
			}
		}
		return count;
	}
	return 0;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

