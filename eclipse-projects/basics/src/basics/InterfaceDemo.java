package basics;
interface Animal{
	void sound();
}
class Dog implements Animal{
	public void sound() {
		System.out.println("Woof!");
	}
}
class Cat implements Animal{
	public void sound() {
		System.out.println("Meow!");
	}
}
public class InterfaceDemo {
	public static void main(String[] args) {
		Animal dog = new Dog();
		Animal cat = new Cat();
		dog.sound();
		cat.sound();
	}

}
