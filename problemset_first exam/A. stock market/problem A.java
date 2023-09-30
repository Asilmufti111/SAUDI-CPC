
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws FileNotFoundException {
        
        File input_file = new File("stock.in");
        Scanner input = new Scanner(input_file);

        int test = input.nextInt();
        for (int i = 0; i < test; i++) {
            int x = input.nextInt();
            int y = input.nextInt();
            int s = y - x;
            System.out.println(s);
        }}}
