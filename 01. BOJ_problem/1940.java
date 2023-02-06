import java.util.*;

public class Main {
    public static void main(String[] args) {
        int cnt = 0;
        Scanner sc = new Scanner(System.in);

        int testCase = sc.nextInt();
        int Sum = sc.nextInt();
        int[] arr = new int[testCase];

        for(int i = 0; i < testCase; i++) {
            int input = sc.nextInt();
            arr[i] = input;
        }

        for(int i = 0; i < testCase; i++) {
            for(int j = i+1; j < testCase; j++) {
                int input_sum = arr[i] + arr[j];
                if(Sum == input_sum) {
                    cnt++;
                }
            }

        }
         System.out.println(cnt);
    }
}
