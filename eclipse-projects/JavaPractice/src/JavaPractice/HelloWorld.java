package JavaPractice;

public class HelloWorld {
	static int add (int a, int b) {
		return a+b;
	}
	static int divide(int a, int b) {
		return a/b;
	}
	public static void main(String[] args) {
		System.out.println("Hellow World");
		int x= 10, y =0;
		int result_divide = 0;
		int result_add = add(x,y);
		try {
			result_divide = divide(x, y);

		} catch (Exception e) {
			System.out.println("Unexpected error : " + e);
		}
		System.out.println(result_add);
		System.out.println(result_divide);
	}

}
