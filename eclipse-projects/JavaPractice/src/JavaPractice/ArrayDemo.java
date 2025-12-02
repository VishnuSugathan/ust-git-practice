package JavaPractice;

public class ArrayDemo {
	public static void main(String[] args) {
		
		int [] numbers  = {1,2,3,4,5};
		int [] odd = new int[5];
		for (int i=0; i<5; i++) {
			if (numbers[i]%2!=0) {
				odd[i] = numbers[i];
			}
		
				
		}
		for (int i=0; i<5; i++) {
 
			System.out.println(odd[i]);
		}
		
		
	
	}

}
