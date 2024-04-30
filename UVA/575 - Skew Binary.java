import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

  public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));		
    String line;
    long n;
    int s;
    
    while ((line = br.readLine()) != null) {
      if (line.equals("0")) break;
      
      n = 0;
      s = line.length();
      for (int i = 0; i < s; i++) {
        if (line.charAt(i) == '1') {
          n += (Math.pow(2, s-i) - 1);
        } else if (line.charAt(i) == '0') {
        } else {
          n += (2 * (Math.pow(2, s-i) - 1));
          break;
        }
      }
      System.out.println(n);
    }
  }
}
