# include <stdio.h>
int main (){
	int mul[10];
	int i ;
	
	for ( i=0;i<10;i++){
		mul[i]=5*(i+1);
		
	}
	for ( i=0;i<10;i++){
		printf("5X%d=%d\n",i+1,mul[i]);
		
	}
	
	
	printf("\n\n*************************************************\n\n");
	
	int j ;
	
	for (j=0;j<10;j++){
		mul[j]=60*(j+1);
		
	}
	for (j=0;j<10;j++)
	printf("60X%d=%d\n",j+1,mul[j]);
	
	printf("\n\n*************************************************\n\n");
	
	int k ;
	
	for (k=0;k<10;k++){
		mul[k]=60*(k+1);
		
	}
	for (k=0;k<10;k++)
	printf("25X%d=%d\n",k+1,mul[k]);
	
	

	
	return 0;
	
}
