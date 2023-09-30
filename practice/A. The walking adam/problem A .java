
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class ProblemA {

    public static void main(String[] args) throws FileNotFoundException {

        File input_file = new File("adam.in");//create a file object to read from it

        if (!input_file.exists()) { //check that the file is exist
            System.out.println("The file does not exist");//display that the file does not exist
            System.exit(0);//exit from the program
        }

        Scanner input = new Scanner(input_file);
        int test = input.nextInt();
        for (int i = 0; i < test; i++) {
            String step = input.next();
            int walk = 0;
            for (int j = 0; j < step.length(); j++) {
                char ch = step.charAt(j);
                if (ch == 'U') {
                    walk++;

                } else {
                    break;
                }
            }
            System.out.println(walk);

        }
        input.close();

    }

}
