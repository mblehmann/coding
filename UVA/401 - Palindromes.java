import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.TreeMap;

public class Subway {
	
	public static boolean is_palindrome(String word) {
		for (int i = 0; i < word.length()/2; i++) {
			if (word.charAt(i) != word.charAt(word.length()-1-i)) {
				return false;
			}
		}
		return true;
	}
	
	public static boolean is_mirrored(String word, TreeMap<Character, Character> reverse) {
		for (int i = 0; i < word.length()/2; i++) {
			if (word.charAt(i) != reverse.get(word.charAt(word.length()-1-i))) {
				return false;
			}
		}
		if ((word.length() % 2) == 1) {
			return word.charAt(word.length()/2) == reverse.get(word.charAt(word.length()/2));
		}
		return true;
	}
	
	public static boolean is_mirrored_palindrome(String word, TreeMap<Character, Character> reverse) {
		for (int i = 0; i < word.length()/2; i++) {
			if (word.charAt(i) != reverse.get(word.charAt(word.length()-1-i)) || word.charAt(i) != word.charAt(word.length()-1-i)) {
				return false;
			}
		}
		if ((word.length() % 2) == 1) {
			return word.charAt(word.length()/2) == reverse.get(word.charAt(word.length()/2));
		}
		return true;
	}

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		TreeMap<Character, Character> reverse = new TreeMap<Character, Character>();
		reverse.put('A', 'A');
		reverse.put('B', ' ');
		reverse.put('C', ' ');
		reverse.put('D', ' ');
		reverse.put('E', '3');
		reverse.put('F', ' ');
		reverse.put('G', ' ');
		reverse.put('H', 'H');
		reverse.put('I', 'I');
		reverse.put('J', 'L');
		reverse.put('K', ' ');
		reverse.put('L', 'J');
		reverse.put('M', 'M');
		reverse.put('N', ' ');
		reverse.put('O', 'O');
		reverse.put('P', ' ');
		reverse.put('Q', ' ');
		reverse.put('R', ' ');
		reverse.put('S', '2');
		reverse.put('T', 'T');
		reverse.put('U', 'U');
		reverse.put('V', 'V');
		reverse.put('W', 'W');
		reverse.put('X', 'X');
		reverse.put('Y', 'Y');
		reverse.put('Z', '5');
		reverse.put('1', '1');
		reverse.put('2', 'S');
		reverse.put('3', 'E');
		reverse.put('4', ' ');
		reverse.put('5', 'Z');
		reverse.put('6', ' ');
		reverse.put('7', ' ');
		reverse.put('8', '8');
		reverse.put('9', ' ');
		
		String line;

		while ((line = br.readLine()) != null) {
			line = line.trim();
			System.out.print(line);
			if (is_mirrored_palindrome(line, reverse)) {
				System.out.println(" -- is a mirrored palindrome.");
			} else if (is_mirrored(line, reverse)) {
				System.out.println(" -- is a mirrored string.");
			} else if (is_palindrome(line)) {
				System.out.println(" -- is a regular palindrome.");
			} else {
				System.out.println(" -- is not a palindrome.");
			}
			System.out.println();
		}
		
	}
	
}
