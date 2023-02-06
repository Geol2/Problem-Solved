import java.util.*;

public class Main {
    public  static int gcm(int a, int b) {
        while(b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        for(int i = 0; i < num; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            System.out.println(a * b /gcm(a, b));
        }
    }
}
