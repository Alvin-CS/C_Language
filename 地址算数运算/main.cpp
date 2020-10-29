#include<stdio.h>

#define ALLOCSIZE 10000
static char allocbuf[ALLOCSIZE];

static char* allocp = allocbuf;

char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n)
	{
		allocp += n;
		return allocp - n;
	}
	else
	{
		return 0;
	}
}

void afree(char* p)
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
	{
		allocp = p;
	}
}


int main()
{
	static char allocbuf_char[2];
	static int allocbuf_int[2];




	printf_s("allocbuf_char = %d\r\n", allocbuf_char);
	printf_s("allocbuf_char+1 = %d\r\n", allocbuf_char+1);

	printf_s("allocbuf_int = %d\r\n", allocbuf_int);
	printf_s("allocbuf_int+1 = %d\r\n", allocbuf_int + 1);

	

	
}