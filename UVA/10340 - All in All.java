import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

  public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));		
    String line;
    String[] words;
    String s, t;
    int index;
    boolean found;

    while ((line = br.readLine()) != null) {
      words = line.split(" ");
      s = words[0];
      t = words[1];

      if (t.contains(s)) {
        found = true;
      } else {
        index = 0;
        found = false;
        for (int i = 0; i < s.length(); i++) {
          while (index < t.length()) {
            if (s.charAt(i) == t.charAt(index)) {
              if (i == s.length()-1) {
                found = true;
              }
              index++;
              break;
            }
            index++;
          }
        }
      }
      if (found) {
        System.out.println("Yes");
      } else {
        System.out.println("No");
      }
    }
  }
}
