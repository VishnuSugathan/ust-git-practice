package basics;

public class ExceptionHandlingDemo {
	public static void main(String[] args) {
		int n = 10;
		int m = 0;
		try {
			int result = n / m;
			System.out.println(result);
		} catch (ArithmeticException e) {
			System.out.println("Error:Division by 0");
		}

	}

}
