import java.lang.reflect.Array;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int cnt = sc.nextInt();

        String arr[] = new String[cnt];
        for(int i = 0; i < cnt; i++) {
            String str = sc.next();
            arr[i] = str;
        }

        Arrays.sort(arr);

        Arrays.sort(arr, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                if (o1.length() - o2.length() == 0) { // 길이가 같으면
                    return o1.compareTo(o2); // 사전순
                }
                // 길이가 다르면
                return o1.length() - o2.length();
            }
        });

        System.out.println(arr[0]);
        for(int i = 1; i < arr.length; i++) {
            if(arr[i-1].equals(arr[i])) continue;
            System.out.println(arr[i]);
        }
    }
}
