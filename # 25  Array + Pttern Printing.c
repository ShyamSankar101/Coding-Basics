// skip two elements after the occurrence of an odd number and print the array elements in F Pattern


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int limit,ar2=0;
  	int array1[100],array2[100];
  	setbuf(stdout,NULL);
  	printf("Enter array size\n");
  	scanf("%d",&limit);
  	printf("Enter values\n");
  	for(int i=0;i<limit;i++){
              	scanf("%d",&array1[i]);
  	}

  	for(int i=0;i<limit;i++){
              	array2[ar2]=array1[i];
              	ar2++;
              	if(array1[i]%2==1){
                          	i=i+2;
              	}
  	}
  	int row=3;
  	int printIndex=0;
  	for(int i=1;i<=row;i++){
              	for(int j=1;j<=2*i;j++){
                          	printf("%d ",array2[printIndex]);
                          	printIndex++;
                          	if(printIndex>=ar2){
                                      	printIndex=0;
                          	}
              	}
              	printf("\n");
              	if(i<row){
                          	for(int k=1;k<=i*3;k++){
                                      	printf("%d\n",array2[printIndex]);
                                      	printIndex++;
                                      	if(printIndex>=ar2){
                                                  	printIndex=0;
                                      	}
                          	}
              	}
  	}


  	return EXIT_SUCCESS;
}
