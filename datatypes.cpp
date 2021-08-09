#include<stdio.h>
	int main()
	{
    		int i;//declaration and definition of integer
    		i=20;//initialization
    		float f;//declaration and definition of float
    		f=3.14;//initialization
    		char a;//declaration and definition of float
    		a='z';//initialization
    		double d;//declaration and definition of double 
    		d=4.7;//initialization
    		long double ld;//declaration and definition of long double
    		ld=3.14e+2;//initialization
    		short int si;//declaration and definition of short int
    		si=-564;//initialization
    		long int li;//declaration and definition of long int
    		li=4345567;//initialization
    		unsigned int ui;//declaration and definition of unsigned int
    		ui=65;//initialization
    		signed int sgi;//declaration and definition of signed int
    		sgi=6776;//initialization
    		printf("size of integer          :%ld\n" , sizeof(i)); //range:-32,768 to 32,767
    		printf("size of float            :%ld\n" , sizeof(f)); //range: 3.4E +/-38  
    		printf("size of character        :%ld\n" , sizeof(a)); //range:-128 to 127
    		printf("size of double           :%ld\n" , sizeof(d)); //range:1.7E +/- 308
    		printf("size of long double      :%ld\n" , sizeof(ld)); //range:1.7E +/- 308
    		printf("size of short integer    :%ld\n" , sizeof(si)); //range:-32,768 to 32,767
    		printf("size of long integer     :%ld\n" , sizeof(li)); //range:-2,147,483,648 to -2,147,483,647
    		printf("size of unsigned integer :%ld\n" , sizeof(ui)); //range:0 to 65,535
    		printf("size of signed integer   :%ld\n" , sizeof(sgi)); //range:-32,768 to 32,767
    		return 0;
	}

