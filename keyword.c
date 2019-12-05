#include "keyword.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#define NKEYS 7

struct keytat{
	int nums; //나온횟수 
	char name[MAX_NAME];
};


struct keytat keywords[NKEYS] = {
	{0, "int"},
	{0, "float"},
	{0, "return"},
	{0, "if"},
	{0, "for"},
	{0, "while"},
	{0, "scanf"}
};

void count_word(char* word)
{
	//각 keyword 별로
	int i;
	for (i=0; i<NKEYS; i++)
	{
		//wordf랑 keywrd랑 같은문자 나오면 
		if(strncmp(word, keywords[i].name, strlen(keywords[i].name))==0)
		{
			//nums++
			keywords[i].nums++;
		}
	}
}

void print_word()
{
	int i;
	for(i=0; i<NKEYS; i++)
	{
		printf("%s : %i\n", keywords[i].name, keywords[i].nums);
	}
}
