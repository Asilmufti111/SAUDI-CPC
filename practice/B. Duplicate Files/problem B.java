
import java.io.*;
import java.util.*;

public class ProblemB {

    public static void main(String[] args) throws FileNotFoundException {

        File input_file = new File("files.in");
        Scanner input = new Scanner(input_file);

        int test = input.nextInt();
        for (int i = 0; i < test; i++) {
            int line = input.nextInt();
            ArrayList<Integer> ids = new ArrayList<>();
            ArrayList<String> name = new ArrayList<>();
            for (int j = 0; j < line; j++) {
                name.add(input.next());
                ids.add(input.nextInt());
            }
            Collections.sort(ids);
            for (int j = name.size() - 1; j > 0; j--) {
                if (name.get(j).equals(name.get(j - 1))) {
                    ids.remove(j);
                    name.remove(j);
                }
            }
            for (int j = 0; j < ids.size(); j++) {
                System.out.print(ids.get(j) + " ");
            }
            System.out.println();
        }
    }
}
