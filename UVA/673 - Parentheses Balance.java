import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Vector;


public class Subway {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String line;
		Vector<Boolean> pilha;
		boolean f;
		int n;
		int p, b;
		
		n = Integer.parseInt(br.readLine());
		
		for (int j = 0; j < n; j++) {
			line = br.readLine();
			pilha = new Vector<Boolean>();
			if (line.isEmpty()) {
				System.out.println("Yes");
			} else if (line.length() % 2 == 1) {
				System.out.println("No");
			} else {
				f = true;
				p = 0; b = 0;
				for (int i = 0; i < line.length(); i++) {
					if (line.charAt(i) == '(') {
						pilha.add(true);
						p++;
					} else if (line.charAt(i) == ')') {
						if (!pilha.isEmpty() && pilha.elementAt(pilha.size()-1)) {
							pilha.removeElementAt(pilha.size()-1);
							p--;
						} else {
							f = false;
							break;
						}
					} else if (line.charAt(i) == '[') {
						pilha.add(false);
						b++;
					} else if (line.charAt(i) == ']') {
						if (!pilha.isEmpty() && !pilha.elementAt(pilha.size()-1)) {
							pilha.removeElementAt(pilha.size()-1);
							b--;
						} else {
							f = false;
							break;
						}
					}
					
				}
				if (f && p == 0 && b == 0) {
					System.out.println("Yes");
				} else {
					System.out.println("No");					
				}
			}
		}
		
	}
	
}
