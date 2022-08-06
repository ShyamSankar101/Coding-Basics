/*
print the following pattern (hint: use nested loop)
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	setbuf(stdout,NULL);
  	for(int i=1;i<=5;i++){
              	for(int j=1;j<=i;j++){
                          	printf("%d",j);
              	}
              	printf("\n");
  	}
  	return EXIT_SUCCESS;
}
