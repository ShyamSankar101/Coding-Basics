//program to show the grade obtained by a student after they enter their total mark percentage.


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	float totalMark;
  	setbuf(stdout,NULL);
  	printf("Enter your total mark percentage");
  	scanf("%f",&totalMark);
  	if(totalMark>=90){
              	printf("A");
  	}
  	else if(totalMark>=80){
              	printf("B");
  	}
  	else if(totalMark>=70){
                          	printf("C");
  	}
  	else if(totalMark>=60){
                          	printf("D");
  	}
  	else if(totalMark>=50){
                          	printf("E");
  	}
  	else{
                          	printf("Failed");
  	}
  	return EXIT_SUCCESS;
}
