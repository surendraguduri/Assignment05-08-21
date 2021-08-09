#include<stdio.h>
int main()
{
    		int a, b;
    		float c,d;
		scanf("%d %d\n",&a,&b);
		scanf("%f %f\n",&c,&d);
		//Arithmetic operators (+, -, *, /, %)
		printf("sum=%d\n", a+b); //4
		printf("diff=%d\n", a-b); //0
		printf("mul=%d\n", a*b); //4
		printf("div=%d\n", a/b); //1
		printf("mod=%d\n", a%b); //0
		//Relational operators(<, >, <=, >=, ==, !=)
		printf("%d\n" ,c>d); //0
		printf("%d\n" ,c<d); //0
		printf("%d\n" ,c>=d); //1
		printf("%d\n" ,c<=d); //1
		printf("%d\n" ,c==d); //1
		printf("%d\n" ,c!=d); //0
		//Bitwise operators(&, |, ^, <<, >>)
		printf("%d\n", a&b); //2
		printf("%d\n", a|b); //2
		printf("%d\n", a^b); //0
		printf("%d\n", a<<b); //8
		printf("%d\n", a>>b); //0
		//logical operators(&&, ||, !)
		printf("%d\n", a&&b); //1
		printf("%d\n", a||b); //1
		printf("%d\n", !a); //0
		//assignment operators(+=, -=, *=, /=, %=)  
		printf("%d\n", a+=b); //4
		printf("%d\n", a-=b); //2
		printf("%d\n", a*=b); //4
		printf("%d\n", a/=b); //2
		printf("%d\n", a%=b); //0 
		//conditional operator to find largest number(?:)
		printf("%d",((a>b)?a:b));
		return 0;
}

