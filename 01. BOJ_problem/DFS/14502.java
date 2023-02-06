import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;


// 실패
public class Main {

    public static ArrayList<ArrayList<Integer>> list = new ArrayList<>();

    public static ArrayList<ArrayList<Integer>> listSearchedWall = new ArrayList<>();

    public static int result = 0;

    public static int[] dx = {-1, 1, 0, 1};
    public static int[] dy = {0, 0, -1, 1}; // 상하좌우

    public static int N;

    public static int M;

    public static void virus(int x, int y) {
        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if(listSearchedWall.get(nx).get(ny) == 0) {
                    listSearchedWall.get(nx).set(ny, 2);
                    virus(nx, ny);
                }
            }
        }
    }

    public static int getScore() {
        int score = 0;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if( listSearchedWall.get(i).get(j) == 0) {
                    score += 1;
                }
            }
        }

        return score;
    }

    public static void dfs(int cnt) {
        if(cnt == 3) {
            for(int i = 0; i < N; i++) {
                for(int j = 0; j < M; j++) {
                    listSearchedWall.get(i).set(j, list.get(i).get(j));
                }
            }

            for(int i = 0; i < N; i++) {
                for(int j = 0; j < M; j++) {
                    if(list.get(i).get(j) == 2) {
                        virus(i, j);
                    }
                }
            }

            result = Math.max(result, getScore());
            return;
        }

        // 울타리 설치해야됨...
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                if(list.get(i).get(j) == 0) {
                    list.get(i).set(j, 1); // 울타리 설치
                    cnt++;
                    dfs(cnt);
                    list.get(i).set(j, 0); // 울타리 철거
                    cnt--;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tempN = sc.nextInt();
        int tempM = sc.nextInt();

        N = tempN;
        M = tempM;

        for(int i = 0; i < tempN; i++) {
            list.add(new ArrayList<>());
            listSearchedWall.add(new ArrayList<>());

            for(int j = 0; j < tempM; j++) {
                int area = sc.nextInt();
                list.get(i).add(area);
                listSearchedWall.get(i).add(0);
            }
        }

        dfs(0);
        System.out.println(result);
    }
}
