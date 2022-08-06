/*
Write a program to interchange the values of two arrays.
Program should accept an array from the user, swap the values of two arrays and display it on the console
Eg: Output: Enter the size of arrays

Input: 5
Output: Enter the values of Array 1

Input: 10, 20, 30, 40, 50
Output: Enter the values of Array 2

Input: 15, 25, 35, 45, 55

Output: Arrays after swapping:
Array1: 15, 25, 35, 45, 55
Array2: 10, 20, 30, 40, 50
*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int array1[100],array2[100];
  	int limit,i,tmp;
  	setbuf(stdout,NULL);
  	printf("Enter the size of array");
  	scanf("%d",&limit);

  	printf("Enter the values of Array1");
  	for(i=0;i<limit;i++){
              	scanf("%d",&array1[i]);
  	}
  	printf("Enter the values of Array2");
  	for(i=0;i<limit;i++){
              	scanf("%d",&array2[i]);
  	}

    for(i=0;i<limit;i++){
	  tmp=array1[i];
	  array1[i]=array2[i];
	  array2[i]=tmp;
	}

  	printf("Arrays after swapping\n");
  	printf("Array1 : ");
  	for(i=0;i<limit;i++){
              	printf("%d ",array1[i]);
  	}
  	printf("\n");
  	printf("Array2 : ");
  	for(i=0;i<limit;i++){
              	printf("%d ",array2[i]);
  	}
  	return EXIT_SUCCESS;
}
