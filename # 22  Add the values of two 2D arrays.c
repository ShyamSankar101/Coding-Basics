//program to add the values of two 2D arrays


#include <stdio.h>
#include <stdlib.h>
int array1[100][100];
int array2[100][100];
int sumArray[100][100];
int size;
void getArray();
void addArray();
void displayArray();
int main(void) {
  	setbuf(stdout,NULL);
  	getArray();
  	addArray();
  	displayArray();
  	return EXIT_SUCCESS;
}
void getArray(){
  	printf("Enter size of array");
  	scanf("%d",&size);
  	printf("Enter values of array1\n");
  	for(int i=0;i<size;i++){
              	for(int j=0;j<size;j++){
                          	scanf("%d",&array1[i][j]);
              	}
  	}
  	printf("Enter values of array2\n");
  	for(int i=0;i<size;i++){
              	for(int j=0;j<size;j++){
                          	scanf("%d",&array2[i][j]);
              	}
  	}
}
 void addArray(){
  	for(int i=0;i<size;i++){
  	        	for(int j=0;j<size;j++){
  	                    	sumArray[i][j]=array1[i][j]+array2[i][j];
  	        	}
  	 }
 }
 void displayArray(){
  	 for(int i=0;i<size;i++){
  	                    	for(int j=0;j<size;j++){
  	                                	printf("%d ",sumArray[i][j]);
  	                    	}
  	                    	printf("\n");
  	        	}
 }
