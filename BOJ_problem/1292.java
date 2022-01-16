import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[1002];
        Arrays.fill(arr, 0);

        int index = 1;
        int cd = 1;
        int tmp = 1;
        int value = 1;

        for(int i = 0; i < arr.length; i++) {
            if( i == 0) arr[i] = 1;
            if( i == 1) arr[i] = 2;

            tmp = index;
            index = index + cd;
            for(int j = tmp-1; j < index - 1; j++) {
                if(j > 1000) break;
                arr[j] = value;
            }
            cd++;
            value++;
        }

        int start = sc.nextInt();
        int end = sc.nextInt();
        int sum = 0;
        for(int i = start; i <= end; i++) {
            sum += arr[i-1];
        }
        System.out.println(sum);
    }
}
