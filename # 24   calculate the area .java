// calculate the area of a given object

MyClass.java
import java.util.Scanner;

public class MyClass extends Area{
  	public static void main(String[] args) {
              	int choice;
              	Scanner sc=new Scanner(System.in);
              	System.out.println("Enter Your choice\n1.Circle\n2.Square\n3.Rectangle\n4.Triangle");
              	choice=sc.nextInt();
              	MyClass a=new MyClass();
              	switch(choice) {
              	case 1:
                          	a.circle();
                          	break;
              	case 2:
                          	a.square();
                          	break;
              	case 3:
                          	a.rectangle();
                          	break;
              	case 4:
                          	a.triangle();
                          	break;
              	default:
                          	System.out.println("Invalid choice");
              	}
  	}
  	public void circle() {
              	super.circle();
  	}
  	public void square() {
              	super.square();
  	}
  	public void rectangle() {
              	super.rectangle();
  	}
  	public void triangle() {
              	super.triangle();
  	}
}
Area.java
import java.util.Scanner;

public class Area {
  	private Scanner sc;
  	Area(){
              	sc=new Scanner(System.in);
  	}
  	public void circle() {
              	float radius,area;
              	System.out.println("Enter the radius");
              	radius=sc.nextFloat();
              	area=(float) 3.14*radius*radius;
              	System.out.println("Area of the circlre="+area);
  	}
  	public void square() {
              	float length,area;
              	System.out.println("Enter length");
              	length=sc.nextFloat();
              	area=length*length;
              	System.out.println("Area of the square="+area);
  	}
  	public void rectangle() {
              	float length,width,area;
              	System.out.println("Enter length");
              	length=sc.nextFloat();
              	System.out.println("Enter width");
              	width=sc.nextFloat();
              	area=length*width;
              	System.out.println("Area of the rectangle="+area);
  	}
  	public void triangle() {
              	float base,height,area;
              	System.out.println("Enter Base");
              	base=sc.nextFloat();
              	System.out.println("Enter height");
              	height=sc.nextFloat();
              	area=base*height/2;
              	System.out.println("Area of the triangle="+area);
  	}
}
