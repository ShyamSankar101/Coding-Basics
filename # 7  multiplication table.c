#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int num;
  	setbuf(stdout,NULL);
  	printf("Enter a number");
  	scanf("%d",&num);
  	for(int i=1;i<=10;i++){
              	printf("%d*%d=%d\n",i,num,i*num);
  	}
  	return EXIT_SUCCESS;
}
