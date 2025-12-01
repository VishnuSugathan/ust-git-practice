package basics;
import java.util.ArrayList;
import java.util.List;
import java.util.Collections;
public class ListDemo {
public static void main(String[] args) {
	List<Integer> numbers = new ArrayList<Integer>();
	numbers.add(6);
	numbers.add(8);
	numbers.add(10);
	numbers.add(5);
	System.out.println(numbers);
	System.out.println("Ascending sort with sort comparator");
	Collections.sort(numbers, (a,b) -> a-b);
	System.out.println(numbers);
	System.out.println("Descending sort with sort comparator");
	Collections.sort(numbers, (a,b) -> b-a);
	System.out.println(numbers);


	
}
}
