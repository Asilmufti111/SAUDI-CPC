
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws FileNotFoundException {

        File input_file = new File("fair.in");
        Scanner input = new Scanner(input_file);

        int n = input.nextInt();
        int sumj = 0, sumg = 0;
        for (int d = 0; d < 2; d++) {
            for (int i = 0; i < n; i++) {
                if (d == 0) {
                    sumj += input.nextInt();
                } else {
                    sumg += input.nextInt();
                }
            }
        }

        if (sumj == sumg) {
            System.out.println("fair ");
        } else {
            System.out.println("not fair");
        }}}
