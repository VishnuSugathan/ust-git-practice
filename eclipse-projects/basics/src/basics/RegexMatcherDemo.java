package basics;
import java.util.regex.Pattern;
import java.util.regex.Matcher;
public class RegexMatcherDemo {
	public static void main(String[] args) {
		Pattern p  = Pattern.compile("geeks");
		Matcher m = p.matcher("geeksforgeeks.org");
		while (m.find()) {
            System.out.println("Pattern found from " + m.start() + " to " + (m.end() - 1));
        }
		
	}
	

}
