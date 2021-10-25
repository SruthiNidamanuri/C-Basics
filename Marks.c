#include<stdio.h>
void main()
{
	//variable declaration
	int phy,che,mat,eng,tot;
	
	//Initillization
	phy = 50;
	che = 60;
	mat = 70;
	eng = 40;
	
	//Calculation
	tot = phy + che + mat + eng;
	
	//Output
	printf("Marks in physics: %d\n", phy);
    printf("Marks in chemistry: %d\n", che);	
	printf("Marks in Maths: %d\n", mat);	
	printf("Marks in English: %d\n", eng);	
	printf("Marks Total: %d", tot);
}
