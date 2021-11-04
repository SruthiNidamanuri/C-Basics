#include<stdio.h>
void main()
{
	//Variable Declaration
	int a,b,c,d,e,f,sum,prdt,div,mul,rem;
	
	//Initalization
    
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
	f = 6;
	sum = a+b;
	prdt= b-c;
	div = c/d;
	mul = d*e;
	rem = e%f;
	 
	printf("sum of %d and %d and %d \n:",a,b,sum);
	printf("product of %d and %d and %d \n:",b,c,prdt);
	printf("division of %d and %d and %d \n:",c,d,div);
	printf("multiplication of %d and %d and %d \n:",d,e,mul);
	printf("remainder of %d and %d and %d is:",e,f,rem);
}
