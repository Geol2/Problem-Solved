package com.company;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
    public static int[] distance = new int[300001];

    public static void bfs(ArrayList<ArrayList<Integer>> graph, int X, int K, int N) {
        Queue<Integer> queue = new LinkedList<>();
        queue.add(X);

        while( !queue.isEmpty() ) {
            int v = queue.poll();
            for(int i = 0; i < graph.get(v).size(); i++) {
                int next = graph.get(v).get(i);
                if( distance[next] == -1) {
                    // 방문한 적이 없음
                    distance[next] = distance[v] + 1;
                    queue.add(next);
                }
            }
        }

        boolean check = false;
        for(int i = 0; i <= N; i++) {
            if(distance[i] == K) {
                System.out.println(i);
                check = true;
            }
        }
        if( !check ) System.out.println(-1);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt(); // 도시개수
        int M = sc.nextInt(); // 도로개수
        int K = sc.nextInt(); // 거리정보
        int X = sc.nextInt(); // 출발도시

        ArrayList<ArrayList<Integer>> graph = new ArrayList<ArrayList<Integer>>();

        for(int i = 0; i <= N; i++) {
            graph.add(new ArrayList<Integer>());
            distance[i] = -1;
        }

        distance[X] = 0;

        for(int i = 0; i < M; i++) {
            int from = sc.nextInt();
            int to = sc.nextInt();

            graph.get(from).add(to);
        }

        bfs(graph, X, K, N);
    }
}
