//Write a program to sort an array in descending order


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int array[100];
  	int limit,tmp;
  	setbuf(stdout,NULL);

  	printf("Enter the size of array");
  	scanf("%d",&limit);

  	printf("Enter the values of Array");
  	for(int i=0;i<limit;i++){
              	scanf("%d",&array[i]);
  	}

  	for(int i=0;i<limit-1;i++){
              	for(int j=i+1;j<limit;j++){
                          	if(array[j]>array[i]){
                          		tmp=array[i];
                                      	array[i]=array[j];
                                      	array[j]=tmp;
                          	}
              	}
  	}

  	printf("Sorted array:\n");
  	for(int i=0;i<limit;i++){
              	printf("%d ",array[i]);
  	}

  	return EXIT_SUCCESS;
}
