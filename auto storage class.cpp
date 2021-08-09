#include<stdio.h>
	int fun()
	{
		auto int c=0;
		c++;
		return c;
	}
	int main()	
	{
		printf("%d " ,fun());
		printf("%d ",fun());
		return 0;
	}

