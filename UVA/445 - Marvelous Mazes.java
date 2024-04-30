import java.io.BufferedReader;
import java.io.InputStreamReader;

class Main {

  public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));		
    String line;

    int n;
    char c;
    boolean first = false;
    boolean print = false;

    while ((line = br.readLine()) != null) {
      if ("".equals(line.trim())) {
        first = true;
//        System.out.println();
      } else {
        if (first) {
          System.out.println();
          System.out.println();
          first = false;
        } else {
          if (print) {
            System.out.println();
          }
          print = true;
//          System.out.println();
        }
        n = 0;
        for (int i = 0; i < line.length(); i++) {
          if (line.charAt(i) >= '0' && line.charAt(i) <= '9') {
            n += line.charAt(i)-48;
          } else {
            if (line.charAt(i) == '!') {
              System.out.println();
            } else {
              if (line.charAt(i) == 'b') {
                c = ' ';
              } else {
                c = line.charAt(i);
              }
              for (int j = 0; j < n; j++) {
                System.out.print(c);
              }
            }
            n = 0;
          }
        }
      }
    }
  }
}
