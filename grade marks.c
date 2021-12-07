#include<stdio.h>
void main()
{
	int marks ;
	scanf("%d", &marks);
	if(marks>=80)
	 {
		printf("a");
	 }
	else if(marks>=70)
     {
		printf("b");
	 }
	else if(marks>=60)
	 {
		printf("c");
	 }
	else if ( marks>=50)
	 {
		printf("d");
	 }
	else
	 {
		printf("fail");
	 }
}
