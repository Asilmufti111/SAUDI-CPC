
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class ProblemC {

    
    public static void main(String[] args) throws FileNotFoundException {
        // TODO code application logic here

        File input_file = new File("self.in");
        Scanner input = new Scanner(input_file);
        int test = input.nextInt();
        for (int i = 0; i < test; i++) {
            String n = input.next();
            boolean dec = true;
            for (int j = 0; j < n.length(); j++) {
                int x = Integer.valueOf(String.valueOf(n.charAt(j)));
                int yes = 0;

                for (int s = 0; s < n.length(); s++) {
                    if (Integer.valueOf(String.valueOf(n.charAt(s))) == j) {
                        yes++;
                    }
                }
                if (yes != x) {
                    dec = false;
                }
            }
            if (dec) {
                System.out.println("self-describing");
            } else {
                System.out.println("not self-describing");
            }

        }
    }
}
