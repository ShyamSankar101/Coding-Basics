//Accept a char input from the user and display it on the console.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 char c;
 setbuf(stdout,NULL);
 printf("Enter a alphabet");
 scanf("%c",&c);
 printf("%c",c);
 return EXIT_SUCCESS;
}
