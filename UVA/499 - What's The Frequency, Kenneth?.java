import java.io.BufferedReader;
import java.io.InputStreamReader;


public class Subway {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String line;
		int[] f = new int[256];
		int max;
		while ((line = br.readLine()) != null) {
			for (int i = 0; i < 256; i++) {
				f[i] = 0;
			}
			max = 0;
			for (int i = 0; i < line.length(); i++) {
				if (line.charAt(i) >= 'A' && line.charAt(i) <= 'z') {
					f[line.charAt(i)]++;
					if (f[line.charAt(i)] > max) {
						max = f[line.charAt(i)];
					}
				}
			}
			for (int i = 'A'; i <= 'z'; i++) {
				if (f[i] == max) {
					System.out.print((char) i);
				}
			}
			System.out.println(" " + max);
		}
		
	}
	
}
