package com.company;

import java.util.Scanner;

public class Main {

    public static boolean cmpString(String str, char midVal, int midIndex) {
        int len = str.length() - 1;
        for (int i = 0; i < midIndex; i++) {
            if (str.charAt(i) != str.charAt(len))
                return false;
            len--;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            int getInt = sc.nextInt();

            if (getInt == 0)
                return;

            String getStr = Integer.toString(getInt);
            int midIndex = getStr.length() / 2;
            char midVal = getStr.charAt(midIndex);

            boolean result = cmpString(getStr, midVal, midIndex);

            if (result) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
        }

    }
}
