import java.io.BufferedReader;
import java.io.InputStreamReader;

class Main {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String line;
		
		String newline;
		int b, e;

		while ((line = br.readLine()) != null) {
			newline = "";
			b = 0; e = 0;
			
			for (int i = 0; i < line.length(); i++) {
				if (line.charAt(i) == ' ') {
					e = i;
					for (int j = e-1; j >= b; j--) {
						newline += line.charAt(j);
					}
					newline += " ";
					b = e+1;
				}				
			}
			e = line.length();
			for (int j = e-1; j >= b; j--) {
				newline += line.charAt(j);
			}
		  System.out.println(newline);
			
		}
		
	}
	
}
