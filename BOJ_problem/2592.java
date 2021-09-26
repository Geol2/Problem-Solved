import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr1 = new int[1001];
        Arrays.fill(arr1, 0);

        for(int i = 0; i < 91; i+=10) {
            int getIndex = sc.nextInt();
            arr1[getIndex]++;
        }

        int sum = 0, tmp = 0, max = 0;
        for(int i = 0; i < arr1.length; i+=10) {
            tmp = arr1[i];
            if(tmp > max)
                max = tmp;
            sum = sum + (i * arr1[i]);
        }

        int avg = sum/10;
        System.out.println(avg);
        for(int i = 0; i < arr1.length; i+=10) {
            if(max == arr1[i]) {
                System.out.println(i);
                break;
            }
        }
    }
}
