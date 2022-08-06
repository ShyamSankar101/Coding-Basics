//store and display the values of a 2D array


import java.util.Scanner;

public class Sample {
  	public static void main(String[] args) {
              	A a=new A();
              	a.array=new int[100][100];
  		a.getArray();
  		a.displayArray();
  	}

}
class A {
  	int array[][];
  	int size;
  	Scanner sc=new Scanner(System.in);
  	public void getArray() {
              	System.out.println("Enter size of array");
              	size=sc.nextInt();
              	System.out.println("Enter the values");
              	for(int i=0;i<size;i++) {
                          	for(int j=0;j<size;j++) {
                                      	array[i][j]=sc.nextInt();
                          	}
              	}

  	}
  	public void displayArray() {
              	System.out.println("Array elements are:");
              	for(int i=0;i<size;i++) {
                          	for(int j=0;j<size;j++) {
                                      	System.out.print(array[i][j]+" ");
                          	}
                          	System.out.print("\n");
              	}
  	}
}
