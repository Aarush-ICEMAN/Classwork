#include <stdio.h>
int main(){
	int n;
	int a[n],i;
	// making a program in which the user have to enter the values by himself
	printf("Enter the size of the array ");
	
	printf("Enter the value in the array");
	
	for(i=0;i<n;i++)
	if (a[i]%2==0){
		printf("The numebr is the even number :%d\n", a[i]);
		
	}
	else {
	      printf("The number is the odd number :%d\n",a[i]);
	      
	}
	return 0;
	
}
