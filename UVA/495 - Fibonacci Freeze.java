import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		BigInteger[] fib = new BigInteger[5001];

		fib[0] = BigInteger.ZERO;
		fib[1] = BigInteger.ONE;
		
		for (int i = 2; i < 5001; i++) {
			fib[i] = fib[i-2].add(fib[i-1]);
		}
		
		int n;
		String line;

		while ((line = br.readLine()) != null) {
			n = Integer.parseInt(line);

			System.out.println("The Fibonacci number for " + n + " is " + fib[n]);			
			
		}
		
	}
	
}
