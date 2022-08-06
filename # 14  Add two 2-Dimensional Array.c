//program to add to two dimensional arrays


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int size;
  	int array1[100][100];
  	int array2[1000][100];
  	int sum[100][100];
  	setbuf(stdout,NULL);
  	printf("Enter the size of arrays");
  	scanf("%d",&size);
  	printf("Enter values of array1");
  	for(int i=0;i<size;i++){
              	for(int j=0;j<size;j++){
                          	scanf("%d",&array1[i][j]);
              	}
  	}
  	printf("Enter values of array2");
  	for(int i=0;i<size;i++){
              	for(int j=0;j<size;j++){
                          	scanf("%d",&array2[i][j]);
              	}
  	}

  	for(int i=0;i<size;i++){
              	for(int j=0;j<size;j++){
                                      	sum[i][j]=array1[i][j]+array2[i][j];
              	}
  	}

  	printf("Sum of two arrays is:\n");
  	for(int i=0;i<size;i++){
              	for(int j=0;j<size;j++){
                          		printf("%d\t",sum[i][j]);
              	}
              	printf("\n");
  	}
  	return EXIT_SUCCESS;
}
