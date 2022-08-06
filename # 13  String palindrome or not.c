//Write a program to identify whether a string is a palindrome or not


#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	char s[100];
  	int flag=0,len=0;
  	setbuf(stdout,NULL);
  	printf("Enter a string");
  	scanf("%s",s);

  	while(s[len]!='\0'){
              	len++;
  	}

  	for(int i=0;i<len/2;i++){
              	if(s[i]!=s[len-(i+1)]){
                          	flag=1;
                          	break;
              	}
  	}

  	if(flag==0){
              	printf("Entered string is palindrome");
  	}
  	else{
              	printf("Entered string is not palindrome");
  	}
  	return EXIT_SUCCESS;
}
