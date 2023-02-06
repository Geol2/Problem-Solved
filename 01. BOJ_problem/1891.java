import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t_case = sc.nextInt();
        for (int i = 0; i < t_case; i++) {
            String str_input = sc.next();
            String str = str_input;

            // str 쪼개볼까?
            String[] split = str.split("-");

            int exponent_num = 0;
            int sum = 0;
            int[] result_front = new int[ split[0].length() ];

            for(int j = 0; j < split[0].length(); j++) {
                int getChar = str.charAt(j);
                int convNumber = getChar - 65;
                int exponent = split[0].length() - exponent_num - 1;
                int calc = convNumber * (int)(Math.pow( 26, exponent ));


                result_front[j] = calc;
                sum += result_front[j];

                exponent_num++;
            }

            int split_back = Integer.parseInt(split[1]);

            int result = Math.abs(sum - split_back);
            if(result <= 100) {
                System.out.println("nice");
            } else {
                System.out.println("not nice");
            }
        }
    }
}
