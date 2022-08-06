//program to multiply the adjacent values of an array and store it in an another array


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int array[100],mularray[100];
  	int limit,mulIndex=0;
  	setbuf(stdout,NULL);
  	printf("Enter the array limit");
  	scanf("%d",&limit);
  	printf("Enter the values");
  	for(int i=0;i<limit;i++){
              	scanf("%d",&array[i]);
  	}

  	for(int i=0;i<limit-1;i++){
                          	mularray[mulIndex]=array[i]*array[i+1];
                          	mulIndex++;
  	}
  	for(int i=0;i<mulIndex;i++){
              	printf("%d ",mularray[i]);
  	}
  	return EXIT_SUCCESS;
}
