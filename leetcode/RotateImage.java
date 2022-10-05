package com.leetcode;

import java.util.Arrays;

public class RotateImage {
    static class Solution {
        public void rotate(int[][] matrix) {
            // Step one transpose
            for (int i = 0; i < matrix.length; i++) {
                for (int j = i + 1; j < matrix.length; j++) {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }

            // Step two reverse by rows
            for (int[] row : matrix) {
                reverse(row, row.length);
            }

        }

        public void reverse(int a[], int n) {
            int i, temp;
            for (i = 0; i < n / 2; i++) {
                temp = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int[][] matrix = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
        new Solution().rotate(matrix);
        System.out.println(Arrays.deepToString(matrix));
    }
}
