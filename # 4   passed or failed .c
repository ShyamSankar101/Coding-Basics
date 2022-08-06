//To check whether a student has passed or failed in a subject after he or she enters their mark (pass mark for a subject is 50 out of 100).


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	float mark;
  	setbuf(stdout,NULL);
  	printf("Enter your mark");
  	scanf("%f",&mark);
  	if(mark>50){
              	printf("Passed");
  	}
  	else{
              	printf("Failed");
  	}
  	return EXIT_SUCCESS;
}
