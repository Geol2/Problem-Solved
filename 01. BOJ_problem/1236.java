package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    public static InputStreamReader ir;
    public static BufferedReader br;
    public static StringTokenizer st = new StringTokenizer("");

    public static char[][] castle;

    public static boolean[] row;
    public static boolean[] col;

    public static int r = 0;
    public static int c = 0;

    public static void setRow(int x) {
        row = new boolean[x];
    }

    public static void setCol(int y) {
        col = new boolean[y];
    }

    public static void setCastle(int x, int y) {
        castle = new char[x][y];
    }

    public static void checkedCastle(int x, int y) {
        if(castle[x][y] == 'X') {
            row[x] = true;
            col[y] = true;
        }
    }

    // 만들어낼 성, 최대 50 x 50.
    public static void DrawCastleAndSetCheckLine(int x, int y) throws IOException {
        for (int i = 0; i < x; i++) {
            castle[i] = br.readLine().toCharArray();

            for (int j = 0; j < y; j++) {
                checkedCastle(i, j);
            }
        }

    }

    public static void checkedRowCastle(int x) {
        for (int i = 0; i < x; i++) {
            if (!row[i]) {
                ++r;
            }
        }
    }

    public static void checkedColCastle(int y) {
        for (int i = 0; i < y; i++) {
            if (!col[i]) {
                ++c;
            }
        }
    }

    public static void main(String[] args) throws IOException {
        br = new BufferedReader( new InputStreamReader(System.in) );

        int getX = 0;
        int getY = 0;

        while( !st.hasMoreTokens() ) {
            st = new StringTokenizer( br.readLine() );
        }
        getX = Integer.parseInt( st.nextToken() );
        getY = Integer.parseInt( st.nextToken() );

        setCastle(getX, getY);
        setRow(getX);
        setCol(getY);

        DrawCastleAndSetCheckLine(getX, getY);

        checkedRowCastle(getX);
        checkedColCastle(getY);


        System.out.println( Math.max(c, r) );
    }
}