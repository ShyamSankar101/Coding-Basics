#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	int limit,sum;
  	setbuf(stdout,NULL);
  	printf("Enter a limit");
  	scanf("%d",&limit);
  	for(int i=1;i<=limit;i++){
              	if(i%2==1){
                          	sum+=i;
              	}
  	}
  	printf("Sum of odd numbers=%d",sum);
  	return EXIT_SUCCESS;
}
