package basics;
import java.util.Arrays;
import java.util.Collections;

public class ArrayDemo {
	public static void main(String[] args) {
		Integer [] numbers = {1,2,3,4,5};
		Arrays.sort(numbers);
		String [] names = {"Rob","Bob","Max"};
		System.out.println("First Number:" + numbers[0]);
		System.out.println("First Name:" + names[0]);
		System.out.println("Sorted numbers");
		System.out.println(Arrays.toString(numbers));
		System.out.println("Sorted descending");
		Arrays.sort(numbers,Collections.reverseOrder());
		System.out.println(Arrays.toString(numbers));
		
		
	}
}
