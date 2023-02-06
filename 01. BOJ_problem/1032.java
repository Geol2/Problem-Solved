import java.io.IOException;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        String[] arr = new String[50];
        for(int i = 0; i < tc; i++) {
            String str = sc.next();
            arr[i] = str;
        }

        char[] ch = new char[50];
        int[] cnt = new int[50];
        ch = arr[0].toCharArray();
        for(int i = 0; i < tc; i++) {
            for(int j = 0; j < arr[i].length(); j++) {
                if (arr[i].charAt(j) == ch[j]) {
                    cnt[j]++;
                }
            }
        }

        for(int i = 0; i < ch.length; i++) {
            if(cnt[i] != tc) {
                ch[i] = '?';
            }
        }

        for(int i = 0; i < ch.length; i++) {
            System.out.print(ch[i]);
        }
    }
}
