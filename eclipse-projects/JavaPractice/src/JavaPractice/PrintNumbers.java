package JavaPractice;
class Book{
	String title;
    String author;
	Book(String title, String author){
		this.title = title;
		this.author = author;
	}
	void print() {
		System.out.println("Author : " + this.author + "\nTitle : " + this.title);

		
	}
}

public class PrintNumbers {
public static void main(String[] args) {
	for (int i =0; i<10;i++) {
		System.out.println(i);
	}
	Book b = new Book("Shining","Stephen King");
	b.print();
}
}

