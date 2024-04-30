import java.io.*;
import java.math.*;
import java.util.*;
import java.math.BigDecimal;

public class Main {

 public static void main(String[] args) throws Exception {

 BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
 String s, r;
 String[] ops;
 BigDecimal a, b;
 int n;

 while ((s = in.readLine()) != null && s.length() != 0) {

 ops = s.split(" ");
 a = new BigDecimal(ops[0]);
 b = new BigDecimal(ops[0]);
 n = Integer.parseInt(ops[ops.length-1]);
 for (int i = 0; i < n-1; i++) {
  a = a.multiply(b);
 }

 r = a.toPlainString();
 if (r.startsWith("0.")) {
  r = r.replace("0.", ".");
 }
 while (r.endsWith("0")) {
  r = r.substring(0, r.length()-1);
 }

 System.out.println(r);

 }
 System.exit(0);

 }

}

