import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		BigInteger b, p, m;
		
		String line;

		while ((line = br.readLine()) != null) {
			try {
				b = new BigInteger(line);
				line = br.readLine();
				p = new BigInteger(line);
				line = br.readLine();
				m = new BigInteger(line);
				System.out.println(b.modPow(p, m));
			} catch(Exception e) {
				
			}
		}
		
	}
	
}
