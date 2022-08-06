/*
Income tax is calculated as per the following table

Up to 2.5 Lakhs
No Tax

Above 2.5 Lakhs to 5 Lakhs
5%

Above 5 Lakhs to 10 Lakhs
20%

Above 10 Lakhs to 50 Lakhs
30%
*/



#include <stdio.h>
#include <stdlib.h>

int main(void) {
  	float ai,incomeTax;
  	int taxPers;
  	setbuf(stdout,NULL);
  	printf("Enter your Annual income");
  	scanf("%f",&ai);
  	if(ai<=250000){
              	taxPers=0;
  	}
  	else if(ai<=500000){
              	taxPers=5;
  	}
  	else if(ai<=1000000){
              	taxPers=20;
  	}
  	else if(ai<=5000000){
              	taxPers=30;
  	}
  	incomeTax=ai*taxPers/100;
  	printf("Income tax amount=%f",incomeTax);
  	return EXIT_SUCCESS;
}
