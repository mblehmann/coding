import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

  public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
    String line;
    int n;
    BigInteger p, k, r;
    BigInteger begin, end;
    BigInteger limite = new BigInteger("1000000000");
    BigInteger dois = new BigInteger("2");
    
    while ((line = br.readLine()) != null) {
      n = Integer.parseInt(line);
      p = new BigInteger(br.readLine());
      begin = BigInteger.ONE;
      end = limite;
      k = end.divide(dois);

      while (true) {
        r = k.pow(n);
        if (r.compareTo(p) == 0) {
          break;
        }
        if (r.compareTo(p) == -1) {
          begin = k;
        } else {
          end = k;
        }
               
        k = end.subtract(begin).divide(dois).add(begin);
      }
      System.out.println(k);
    }
  }
}
