import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] tree = new int[5];

        for(int i = 0; i < tree.length; i++) {
            tree[i] = sc.nextInt();
        }
        int tmp = 0;
        for(int i = 0;i < tree.length - 1; i++) {
            for(int j = 0; j < tree.length - 1; j++) {
                if (tree[j] > tree[j + 1]) {
                    tmp = tree[j];
                    tree[j] = tree[j + 1];
                    tree[j + 1] = tmp;
                    for (int k : tree)
                        System.out.print(k + " ");
                    System.out.println();
                }
            }
        }
    }
}
