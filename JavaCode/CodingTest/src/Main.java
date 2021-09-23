import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        HashMap<Integer, Integer> cnt = new HashMap<Integer, Integer>();
        for(int i = 0; i < 100; i+=10) {
            cnt.put(i, 0);
        }

        for(int i = 0; i < 100; i+=10) {
            int num = sc.nextInt();
            int getValue = cnt.get(num);
            cnt.put(num, ++getValue);
        }

        int sum = 0;
        int value_cnt = 0;
        for(int i = 0; i < 100; i+=10) {
            value_cnt = cnt.get(i);
            sum = sum + i * value_cnt;
        }

        int max = 0;
        int tmp = 0;
        for(int i = 0; i < 100; i+=10) {
            tmp = cnt.get(i);
            if (tmp > max) {
                max = tmp;
            }
        }

        System.out.println(sum/10);
        for(Map.Entry<Integer, Integer> entry : cnt.entrySet()) {
            // System.out.println(entry.getKey()+" "+ entry.getValue());
            if(entry.getValue() == max) {
                System.out.println(entry.getKey());
                break;
            }
        }
        sc.close();
    }
}
