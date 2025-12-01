package basics ;

public class OperatorsDemo {
	public static void main(String[] args) {
		int a = 4;
		int b = 2;
		boolean x = true;
		boolean y = false;
		System.out.println("a = " + a);
		System.out.println("b = " + b);
		System.out.println("a + b = " + (a+b));
		System.out.println("a - b = " + (a-b));
		System.out.println("a / b = " + (a/b));
		System.out.println("a > b = " + (a>b));
		System.out.println("a < b = " + (a<b));
		System.out.println("a * b = " + (a*b));
		System.out.println("a % b = " + (a % b));
		System.out.println("x && y = " + (x && y));
		a+=5;
		System.out.println("a = a+5 (assignment operator) : " + a);
		int max = (a > b) ? a : b;
		System.out.println("max = (a > b) ? a :b (Ternary operator) \nmaximum of a and b is  " + max);
		
		
		
	}

}
