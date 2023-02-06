import java.util.Scanner;

public class Main {

    private static int prev = 0;
    private static int next = 0;

    public static int getMultiPrev(String str, int first, int last) {
        if (first == last) {
            return str.charAt(0) - 48;
        }

        int firstNum = str.charAt(0) - 48;
        int nextNum = str.charAt(1) - 48;
        firstNum *= nextNum;

        for (int i = 2; i <= last; i++) {
            nextNum = (str.charAt(i) - 48);
            firstNum = firstNum * nextNum;
        }

        return firstNum;
    }

    public static int getMultiNext(String str, int first, int last) {
        if (first == last) {
            return str.charAt(first) - 48;
        }
        if (first > last) {
            return str.charAt(last) - 48;
        }

        int firstNum = str.charAt(first) - 48;
        int nextNum = str.charAt(first + 1) - 48;
        firstNum *= nextNum;

        for (int i = first + 2; i <= last; i++) {
            nextNum = (str.charAt(i) - 48);
            firstNum = firstNum * nextNum;
        }

        return firstNum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int getInt = sc.nextInt();

        if (getInt == 1) {
            System.out.print("NO");
            return;
        }

        String getStr = Integer.toString(getInt);
        for (int i = 0; i < getStr.length(); i++) {
            int prev_tmp = getMultiPrev(getStr, 0, i);
            int next_tmp = getMultiNext(getStr, i + 1, getStr.length() - 1);

            if (prev_tmp == next_tmp) {
                System.out.print("YES");
                return;
            }
        }
        System.out.print("NO");
    }
}
