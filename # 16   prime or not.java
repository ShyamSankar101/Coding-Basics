// program to check whether a given number is prime or not


import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
  	  int num,flag=0;
  	  Scanner sc=new Scanner(System.in);
  	  System.out.println("Enter a number");
  	  num=sc.nextInt();
  	  for(int i=2;i<num/2;i++){
              	 if(num%i==0){
                          	 flag=1;
                          	 break;
              	 }
  	  }
  	  if(flag==0){
              	   System.out.println("Entered number is a Prime");
  	   }
  	  else{
              	   System.out.println("Entered number is not prime number");
  	  }
  }
}
