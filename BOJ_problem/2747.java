// 피보나치 함수를 사용하여 풀어낸 풀이
import java.util.*;

public class Main {

    public static int fibo(int n) {
        return n <= 2 ? 1 : fibo(n - 2) + fibo(n - 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int result = 0;

        result = fibo(n);

        System.out.println(result);
    }
}

// 동적 프로그래밍으로 풀이.
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int result = 0;
        int[] fibo = new int[100];

        fibo[0] = 0;
        fibo[1] = 1;
        for(int i = 2; i <= n; i++) {
            fibo[i] = fibo[i-2] + fibo[i-1];
        }

        System.out.println(fibo[n]);
    }
}