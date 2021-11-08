#include<stdio.h>
void main()
{
	//Variable Declaration
	int a,b,c;
	//Initillization
	a=30;
	b=20;
	c=10;
	
	printf("%d\n",(a>b)&&(b>c));
    printf("%d\n",(a<b)&&(b<c));
    printf("%d\n",(a>b)&&(b<c));
    printf("%d\n",(a<b)&&(b>c));
    printf("%d\n",(a>=b)&&(b>=c));
    printf("%d",(a<=b)&&(b<=c));
}
