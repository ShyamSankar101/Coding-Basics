/*
Pattern printing

1
2	3
4	5	6
7	8	9	10
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	setbuf(stdout,NULL);
  	int num=1;
	for(int i=1;i<5;i++){
	  for(int j=1;j<=i;j++){
	          	printf("%d ",num);
	          	num++;
	  }
	  printf("\n");
	}
  	return EXIT_SUCCESS;
}
