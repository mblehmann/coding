import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.TreeMap;

class Main {

  public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));		
    String line;
    TreeMap<Character, Character> teclado;
    
    teclado = new TreeMap<Character, Character>();
    teclado.put('1', '`');
    teclado.put('2', '1');
    teclado.put('3', '2');
    teclado.put('4', '3');
    teclado.put('5', '4');
    teclado.put('6', '5');
    teclado.put('7', '6');
    teclado.put('8', '7');
    teclado.put('9', '8');
    teclado.put('0', '9');
    teclado.put('-', '0');
    teclado.put('=', '-');

    teclado.put('W', 'Q');
    teclado.put('E', 'W');
    teclado.put('R', 'E');
    teclado.put('T', 'R');
    teclado.put('Y', 'T');
    teclado.put('U', 'Y');
    teclado.put('I', 'U');
    teclado.put('O', 'I');
    teclado.put('P', 'O');
    teclado.put('[', 'P');
    teclado.put(']', '[');
    teclado.put('\\', ']');

    teclado.put('S', 'A');
    teclado.put('D', 'S');
    teclado.put('F', 'D');
    teclado.put('G', 'F');
    teclado.put('H', 'G');
    teclado.put('J', 'H');
    teclado.put('K', 'J');
    teclado.put('L', 'K');
    teclado.put(';', 'L');
    teclado.put('\'', ';');

    teclado.put('X', 'Z');
    teclado.put('C', 'X');
    teclado.put('V', 'C');
    teclado.put('B', 'V');
    teclado.put('N', 'B');
    teclado.put('M', 'N');
    teclado.put(',', 'M');
    teclado.put('.', ',');
    teclado.put('/', '.');

    teclado.put(' ', ' ');

    while ((line = br.readLine()) != null) {

      for (int i = 0; i < line.length(); i++) {
        System.out.print(teclado.get(line.charAt(i)));
      }
      System.out.println();
    }
  }
}
