/*Write a program to find the number of even numbers in an array
The program should accept an array and display the number of even numbers contained in that array
E.g.: Output: Enter the size of an array
Input: 5
Output: Enter the values of array
Input: 11, 20, 34, 50, 33
Output: Number of even numbers in the given array is 3*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int array[100];
  	int limit,even;
  	setbuf(stdout,NULL);
  	printf("Enter the size of array");
  	scanf("%d",&limit);

  	printf("Enter the values of Array");
  	for(int i=0;i<limit;i++){
              	scanf("%d",&array[i]);
  	}

  	for(int i=0;i<limit;i++){
              	if(array[i]%2==0){
                          	even++;
              	}
  	}

  	printf("Number of even numbers in the given array is %d",even);

  	return EXIT_SUCCESS;
}
