#include <stdio.h>
#include <math.h>
int main(){
	int number , originalnumber , remainder , n=0, result=0;
	printf("Enter a positve Integer ");
	scanf("%d", &number );
	while (originalnumber !=0){
		++n;
		
	}
	originalnumber = number ;
	while (originalnumber!=0 ){
		remainder = originalnumber % 10;
		result+=pow(remainder , n);
		originalnumber /=10;
		
	}
	if (result=number ){
	
	printf("%d is an Armstrong Number \n",number );
	
	}

	return 0;
}
