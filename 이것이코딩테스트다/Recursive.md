# 재귀

종료조건과 문제를 정의하는 부분을 잘 선택해야 한다

자기 자신을 계속 호출하는 알고리즘

재귀가 안되면 분할정복부터 동적 프로그래밍 같은 알고리즘이 안된다

많이 접하다보면 익숙해진다

시간복잡도 : O(n)

## 팩토리얼

## 하노이탑

3개의 기둥을 이용해서 입력된 원반의 수를 따라 하노이탑 과정들을 출력시키는 프로그램

```java
import java.util.*;

public class Main {
    public static StringBuilder sb = new StringBuilder();
    public static void hanoiTop(int n, int from, int to) {
        int middle = 6-from-to;

        if(n == 1) {
            sb.append(from);sb.append(" ");sb.append(to);sb.append('\n');
        } else if( n > 1){
            hanoiTop(n - 1, from, middle);
            hanoiTop(1, from, to); // 가장 긴 판 이동
            hanoiTop(n - 1, middle, to);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println( (1 << n) - 1 );
        hanoiTop(n, 1, 3);
        System.out.print(sb);
    }
}
```