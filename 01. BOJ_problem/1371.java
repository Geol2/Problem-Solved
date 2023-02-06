import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] alpha = new int[27]; // 알파벳 카운트 배열!

        while ( sc.hasNextLine() ) {
            String str = sc.nextLine();
            for(int i = 0; i < str.length(); i++) {
                int index = str.charAt(i) - 'a';
                if( index == -65 ) {
                    continue;
                } else {
                    alpha[index]++;
                }
            }
        }

        int max = 0;
        for (int i = 0; i < 26; i++) {
            if (max < alpha[i]) {
                max = alpha[i];
            }
        }
        for(int i = 0; i < 26; i++) {
            if(max <= alpha[i])
                System.out.print( (char)(i + 'a') );
        }
        sc.close();
    }
}
