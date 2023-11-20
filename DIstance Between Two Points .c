#include <stdio.h>
#include <math.h>
void main(){
	float X1,X2;
	printf("Enter the two numbers X1 and X2\n ");
	scanf("%f%f",&X1,&X2);
	float Y1,Y2;
	printf("Enter the two numbers Y1 and Y2\n ");
	scanf("%f%f",&Y1,&Y2);
	float Distance;
	Distance = sqrt(X2-X1)*(X2-X2)+(Y2-Y1)*(Y2-Y1);
	printf("The Distance Between Two Points = %f\n",Distance);
	system("pause");
	
	
}					
