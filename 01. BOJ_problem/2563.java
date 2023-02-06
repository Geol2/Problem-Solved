import java.io.IOException;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        int[][] arr = new int[101][101];
        for(int i = 0; i < tc; i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();

            int sqr_x = x + 10;
            int sqr_y = y + 10;
            for(int j = x; j < sqr_x; j++) {
                for(int k = y; k < sqr_y; k++) {
                    arr[j][k] = 1;
                }
            }
        }

        int cnt = 0;
        for(int i = 0; i < 100; i++) {
            for(int j = 0; j <  100; j++) {
                if( arr[i][j] == 1) {
                    cnt++;
                }
            }
        }

        System.out.println(cnt);
    }
}
