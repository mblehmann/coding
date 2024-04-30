import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		BigInteger soma;
		BigInteger a;
		
		String line;

		soma = BigInteger.ZERO;
		while ((line = br.readLine()) != null) {	
			a = new BigInteger(line);
			soma = soma.add(a);
		}
		System.out.println(soma);
		
	}
	
}
