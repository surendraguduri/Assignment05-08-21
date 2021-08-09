#include<stdio.h>
int main()
{
    	const float PI=3.14;
	int r;//radius of the circle
	float a, c;
	printf("enter radius of circle :" );
	scanf("%d", &r);
	a = PI * r * r;//area of the circle formula
	printf("Area of circle :%f\n",a);
	c = 2 * PI * r;//circumference of the circle formula
	printf("Circumference  :%f",c);
	return 0;
}

