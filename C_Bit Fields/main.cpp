#include<stdio.h>
#include<string.h>

struct {
	unsigned int WidthValidate;
	unsigned int HeightValidate;
}status1;

struct {
	unsigned int WidthValidate : 1;
	unsigned int HeightValidate : 1;
}status2;

struct {
	unsigned int ages : 3;
}Age;

int main()
{
	printf_s("Memory size occupied by status1 : %d\n", sizeof(status1));
	printf_s("Memory size occupied by status2 : %d\n", sizeof(status2));
	
	Age.ages = 4; 
	printf_s("Sizeof(Age) : %d\n",sizeof(Age));
	printf_s("Age.age = %d\n",Age.ages);

	Age.ages = 7;
	printf_s("Age.age = %d\n", Age.ages);

	Age.ages = 8;
	printf_s("Age.age = %d\n", Age.ages);

	return 0;
}