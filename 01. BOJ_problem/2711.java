import java.io.IOException;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        for(int i = 0; i < tc; i++) {
            int target = sc.nextInt();
            String str = sc.next();

            StringBuffer sb = new StringBuffer("");
            sb.append(str);

            sb.deleteCharAt(target - 1);

            System.out.println(sb);

        }
    }
}