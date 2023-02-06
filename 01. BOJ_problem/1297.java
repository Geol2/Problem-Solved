import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int D = sc.nextInt(); // 길이
        int H = sc.nextInt(); // 높이 비율
        int W = sc.nextInt(); // 너비 비율

        // Math.pow(x, 2) 는 x의 제곱
        double x = Math.sqrt( Math.pow(D, 2) / (Math.pow(H, 2) + Math.pow(W, 2)) );
        System.out.println( (int)Math.floor(x*H) + " " + (int)Math.floor(x*W) );
    }
}