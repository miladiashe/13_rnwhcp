#include <stdio.h>
#include <stdlib.h>
#include "keyword.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int is_whitespace(char word){
	if (word ==' ')
	{
		return 1;
	}
	else if (word =='\n')
	{
		return 1;
	}
	else if (word =='\r')
	{
		return 1;
	}
	else if (word =='\t')
	{
		return 1;
	}
	else if (word =='(')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int fget_word(FILE *fp, char* word)
{
	int cnt;
	char c;
	while ((c = fgetc(fp)) != EOF) 
	{
		if (is_whitespace(c) == 0)
			break;
	}
	if (c == EOF)
	{
		return 0;
	}
	cnt = 0;
	word[cnt++] = c;
	word[cnt] = '\0';
	while ((word[cnt] = fgetc(fp)) != EOF)
	{
		if(is_whitespace(word[cnt]) == 1)
		{
			word[cnt] = '\0';
			break;
		}
		cnt++;
	}
	return cnt;
} 

int main(int argc, char *argv[]) {
	
	FILE *fp; 
	char filepath[100];
	
	//���� ����();
	printf("���� ��� �Է��Ͻÿ�\n");
	scanf("%s", filepath);
	fp = fopen (filepath, "r");
	if(fp == NULL)
	{
		printf("�߸��� ����Դϴ�.\n");
		return -1;
	}
	
	while (fget_word(fp, filepath) != 0)
	{
		//printf("%s/", filepath);
		count_word(filepath);
	}
	print_word();
	//printf("�ùٸ� ����Դϴ�.\n");(�׽�Ʈ��) 
	//���� �� �ܾ� �м�();

	//��� ���(); 
	fclose(fp);
	return 0;
}
