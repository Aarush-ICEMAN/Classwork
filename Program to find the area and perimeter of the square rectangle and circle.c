#include <stdio.h>
void main(){
	//Program to calculate the area & perimeter for circle , square , rectangle
	float L,B;
	printf("Enter the Length & Breadth of the Rectangle\n");
	scanf("%f%f",&L,&B);
	float Area;
	Area=L*B;
	printf("The Area of the Rectangle=%f\n",Area);
	float Perimeter;
	Perimeter=2*(L+B);
	printf("The Perimeter of Rectangle=%f\n",Perimeter);
	float S;
	printf("Enter the Side of the square\n");
	scanf("%f",&S);
	float AreaS;
	AreaS=S*S;
	printf("The Area of Square=%f\n",AreaS);
	float PerimeterS;
	PerimeterS=4*S;
	printf("The Perimeter of Square=%f\n",PerimeterS);
	float R;
	printf("Enter the Radius of the Circle\n");
	scanf("%f",&R);
	float AreaC;
	AreaC=3.14*R*R;
	printf("The Area of the Cicle=%f\n",AreaC);
	float PerimeterC;
	PerimeterC=2*3.17*R;
	printf("Te Perimeter of the Cicle=%f\n",PerimeterC);
	

}
