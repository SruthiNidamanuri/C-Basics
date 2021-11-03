#include<stdio.h>
void main()
{
	//variable Declaration
	int a,b,s,p,d,q,r;
	//Initilization
	a = 22;
	b = 2;
	s = a+b;
	p = a*b;
	d = a-b;
	q = a/b;
	r = a%b;
	
	//output
	printf("sum of %d and %d is:%d\n",a,b,s);
	printf("product of %d and %d is:%d\n",a,b,p);
    printf("Difference of %d and %d is:%d\n",a,b,d);
    printf("Quotient of %d and %d is:%d\n",a,b,q);
    printf("Remainder of %d and %d is:%d\n",a,b,r);
}
