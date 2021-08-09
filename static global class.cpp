#include<stdio.h>
	static int c=0;
	int fun()
	{
		c++;
		return c;
	}
	int main()
	{
		printf("%d ",fun());
		printf("%d",fun());
		return 0;
	}

