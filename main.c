#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	char name[10];
	double grade;
};


int main(int argc, char *argv[]) {
	struct student s1 = {1511090, "��ƿ�", 4.0};
	s1.ID = 1911090;
	strcpy(s1.name, "Cute Noob");
	s1.grade = 4.3;
	
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade); 
	
	return 0;
}
