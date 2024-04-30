import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main {

  public static boolean isPalindrome(BigInteger n) {
    String s = n.toString();    
    for (int i = 0; i < (s.length()+1)/2; i++) {
      if (s.charAt(i) != s.charAt(s.length()-1-i)) {
        return false;
      }
    }
    return true;
  }
  
  public static BigInteger reverse(BigInteger n) {
    String s = n.toString();
    String x = "";
    for (int i = s.length()-1; i >= 0; i--) {
      x += s.charAt(i);
    }
    return new BigInteger(x);
  }
  
	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
    BigInteger n;
    int c;
    int t;
    
    t = Integer.parseInt(br.readLine());

    for (int i = 0 ; i < t; i++) {
      n = new BigInteger(br.readLine());
      c = 0;
      while (!isPalindrome(n)) {
        n = n.add(reverse(n));
        c++;
      }
      System.out.println(c + " " + n);
    }
  }
}
