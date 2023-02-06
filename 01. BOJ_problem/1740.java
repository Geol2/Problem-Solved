import java.util.*;

public class Main {

    private static final int[] arr = new int[100];

    public static int binary(long n, int pos) {
        if(n == 0) return pos;
        arr[pos] = (int) (n%2);
        return binary(n/2, pos+1);
    }

    public static long mypow(int num, int b) {
        long res = 1;
        for(int i = 1; i <= b; i++) res *= num;
        return res;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long res = 0;

        int binaryCnt = binary(n, 0);
        for(int i = 0; i < binaryCnt; i++) {
            res += mypow(3, i) * arr[i];
        }
        System.out.println(res);
    }
}
