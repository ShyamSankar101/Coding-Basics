//program to accept an array and display it on the console using functions

/*
main()
Declare an array
Call function getArray()
Call function displayArray()

		getArray()
Get values to the array

		displayArray()
Display the array values
*/

#include <stdio.h>#include <stdio.h>
#include <stdlib.h>
void getArray(int[]);
void displayArray(int[]);
int limit;
int main(void) {
  	int array[100];
  	setbuf(stdout,NULL);
  	getArray(array);
  	displayArray(array);
  	return EXIT_SUCCESS;
}
void getArray(int array[]){
  	printf("Enter the size of array ");
  	scanf("%d",&limit);
  	printf("Enter values\n");
  	for(int i=0;i<limit;i++){
              	scanf("%d",&array[i]);
  	}
}
void displayArray(int array[]){
  	printf("Values of array:\n");
  	for(int i=0;i<limit;i++){
              	printf("%d\t",array[i]);
  	}
}

#include <stdlib.h>
void getArray(int[]);
void displayArray(int[]);
int limit;
int main(void) {
  	int array[100];
  	setbuf(stdout,NULL);
  	getArray(array);
  	displayArray(array);
  	return EXIT_SUCCESS;
}
void getArray(int array[]){
  	printf("Enter the size of array ");
  	scanf("%d",&limit);
  	printf("Enter values\n");
  	for(int i=0;i<limit;i++){
              	scanf("%d",&array[i]);
  	}
}
void displayArray(int array[]){
  	printf("Values of array:\n");
  	for(int i=0;i<limit;i++){
              	printf("%d\t",array[i]);
  	}
}
