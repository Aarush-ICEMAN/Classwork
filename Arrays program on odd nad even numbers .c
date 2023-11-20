#include <stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10},i;
	for (i=0;i<10;i++){
		if(a[i]%2==0){
			printf("This is an Even Number :%d\n ",a[i]);
			
		}
		else {
			printf("This is an Odd Number :%d\n",a[i]);
			
		}
	}
	return 0;
	
}
