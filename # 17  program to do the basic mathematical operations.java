//menu driven java program to do the basic mathematical operations such as addition, subtraction, multiplication and division


import java.util.Scanner;

public class Sample {

  	public static void main(String[] args) {
              	int choice;
              	Scanner sc=new Scanner(System.in);
              	BasicMathematics a=new BasicMathematics();
              	System.out.println("Enter two numbers");
              	a.num1=sc.nextInt();
              	a.num2=sc.nextInt();
              	System.out.println("Enter your choise \n1 for Addition \n2 for Substraction \n3 for Multiplication \n4 for Division");
  	        	choice=sc.nextInt();
              	switch(choice) {
                          	case 1:
                          	   a.addition();
                          	   break;
                          	case 2:
                                      	a.substraction();
                                      	break;
                          	case 3:
                                      	a.multiplication();
                                      	break;
                          	case 4:
                                      	a.division();
                                      	break;
                          	default:
                                      	System.out.println("Invalid choice");
              	}
  	}
}
class BasicMathematics{
  	int num1,num2;
  	public  void addition() {
              	System.out.println(num1+num2);
  	}
  	public  void substraction() {
              	System.out.println(num1-num2);
  	}
  	public void multiplication() {
              	System.out.println(num1*num2);
  	}
  	public void division(){
              	System.out.println(num1/num2);
  	}
 }
