import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String line;
		int n;

		BigInteger a, b, v;
		String x1, x2;
		String[] c;
		
		String r;
		int index;
		
		n = Integer.parseInt(br.readLine());
		
		for (int i = 0; i < n; i++) {
			line = br.readLine();
			c = line.split(" ");
			x1 = "";
			x2 = "";
			
			for (int j = c[0].length()-1; j >= 0; j--) {
				x1 += c[0].charAt(j);
			}
			for (int j = c[1].length()-1; j >= 0; j--) {
				x2 += c[1].charAt(j);
			}

			a = new BigInteger(x1);
			b = new BigInteger(x2);
			
			v = a.add(b);
			r = v.toString();
			index = 0;
			
			for (int j = r.length()-1; j >= 0; j--) {
				if (r.charAt(j) != '0') {
					index = j;
					break;
				}
			}
			for (int j = index; j >= 0; j--) {
				System.out.print(r.charAt(j));
			}
			System.out.println();
		}
		
	}
	
}
