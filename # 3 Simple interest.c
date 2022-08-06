#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int p;
  	float R,n,si;
  	setbuf(stdout,NULL);
  	printf("Enter principal amount");
  	scanf("%d",&p);
  	printf("Enter Interest rate");
  	scanf("%f",&R);
  	printf("Enter number of years");
  	scanf("%f",&n);
  	si=(p*R*n)/100;
  	printf("Simple Interest: %f",si);
  	return EXIT_SUCCESS;
}
