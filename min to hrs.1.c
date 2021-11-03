#include<stdio.h>
void main()
{
	//Variable Declaration
	int total_min , min ,hrs ;
	total_min = 100;
	min = total_min/60;
	hrs = total_min%60;
	printf("%d hour(s)and %d minutes(s)", min ,hrs);
}
