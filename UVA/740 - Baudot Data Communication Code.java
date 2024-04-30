import java.io.BufferedReader;
import java.io.InputStreamReader;

class Main {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String line;
		char[] down, up;
		boolean d;
		int indice;
		
		down = new char[32];
		up = new char[32];

		line = br.readLine();
		for (int i = 0; i < 32; i++) {
			down[i] = line.charAt(i);
		}
		line = br.readLine();
		for (int i = 0; i < 32; i++) {
			up[i] = line.charAt(i);
		}
				
		while ((line = br.readLine()) != null) {
			
			d = true;
			
			for (int i = 0; i < line.length(); i += 5) {
				indice = 0;
				
				for (int j = 0; j < 5; j++) {
					indice += (Math.pow(2, 4-j) * (line.charAt(i+j)-'0'));
				}
				
				if (indice == 27) {
					d = true;
				} else if (indice == 31) {
					d = false;
				} else {
					if (d) {
						System.out.print(down[indice]);
					} else {
						System.out.print(up[indice]);
					}
				}
			}
			System.out.println();
		}
		
	}
	
}
