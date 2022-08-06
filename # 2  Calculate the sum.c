//Accept two inputs from the user and output its sum.

//Number 1 - Integer
//Number 2 - Float
//Sum - Float

#include <stdio.h>
#include <stdlib.h>
int main(void) {
       int num1;
       float num2,sum;
       setbuf(stdout,NULL);
       printf("Enter two numbers");
       scanf("%d%f",&num1,&num2);
       sum=num1+num2;
       printf("sum: %f",sum);
       return EXIT_SUCCESS;
}
