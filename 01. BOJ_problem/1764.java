import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // 듣지 못한 사람
        int m = sc.nextInt(); // 보지 못한 사람

        HashSet<String> hs = new HashSet<>();
        for(int i = 0; i <= n ; i++) {
           String name = sc.nextLine();
           hs.add(name);
        }

        ArrayList<String> ans = new ArrayList<>();
        for(int i = 0; i < m; i++) {
            String name = sc.nextLine();
            if(hs.contains(name)) {
                ans.add(name);
            }
        }

        ans.sort(null);
        System.out.println( ans.size() );
        for(int i = 0; i < ans.size(); i++) {
            System.out.println( ans.get(i) );
        }
    }
}
