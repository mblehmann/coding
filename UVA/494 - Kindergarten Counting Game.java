import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Subway {

	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String line;
		String sentence;
		int word;
		boolean started;

		while ((line = br.readLine()) != null) {
			
			word = 0;
			sentence = line.toLowerCase();
			started = false;
			for (int i = 0; i < sentence.length(); i++) {
				if (sentence.charAt(i) >= 'a' && sentence.charAt(i) <= 'z') {
					started = true;
				} else {
					if (started) {
						started = false;
						word++;
					}
				}
			}
			if (started) {
				word++;
			}
			System.out.println(word);

		}
		
	}
	
}
