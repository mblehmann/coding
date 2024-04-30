import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		BigInteger c;
		int n, m;
		int limite, divisor;
		int a;
		
		String line;
		String ops[];
		n = 0; m = 0;

		while ((line = br.readLine()) != null) {
			a = 0;
			ops = line.split(" ");
			for (int i = 0; i < ops.length; i++) {
				try {
					if (a == 0) {
						n = Integer.parseInt(ops[i]);
						a++;
					} else {
						m = Integer.parseInt(ops[i]);
						break;
					}
				} catch (Exception e) {
					
				}
			}
			
			if (n == 0 && m == 0) break;
			
			c = BigInteger.ONE;
			
			limite = Math.max(m, n-m);
			divisor = Math.min(m, n-m);
			
			for (int i = n; i > limite; i--) {
				c = c.multiply(BigInteger.valueOf(i));
			}
			for (int i = divisor; i > 1; i--) {
				c = c.divide(BigInteger.valueOf(i));
			}
			
			System.out.println(n + " things taken " + m + " at a time is " + c + " exactly.");
			
		}
		
	}
	
}
