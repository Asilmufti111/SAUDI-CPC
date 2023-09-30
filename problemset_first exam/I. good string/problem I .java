
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws FileNotFoundException {

        File input_file = new File("good.in");
        Scanner input = new Scanner(input_file);

        int yes = 1;
        char letter = ' ';
        String a = input.next();
        int k = input.nextInt();
        for (int i = 0; i < a.length(); i++) {
            if (i != 0 && a.charAt(i) == a.charAt(i - 1)) {
                yes++;
            if (yes == k) {
                letter = a.charAt(i);
                break;
                }
            }

        }
        if (yes == k) {
            System.out.println("YES " + letter);
        } else {
            System.out.println("NO");
        }}}
