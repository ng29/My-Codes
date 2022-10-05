package com.leetcode;

import java.util.HashSet;
import java.util.Set;

public class ValidSudoku {
    static class Solution {
        public boolean isValidSudoku(char[][] board) {
            Set unique = new HashSet();
            for (int i = 0; i < 9; ++i) {
                for (int j = 0; j < 9; ++j) {
                    char number = board[i][j];
                    if (number != '.')
                        if (!unique.add(number + "row" + i) ||
                                !unique.add(number + "column" + j) ||
                                !unique.add(number + "block" + i / 3 + j / 3))
                            return false;
                }
            }
            return true;
        }
    }

    public static void main(String[] args) {
        char[][] board = {{'8', '3', '.', '.', '7', '.', '.', '.', '.'}
                , {'6', '.', '.', '1', '9', '5', '.', '.', '.'}
                , {'.', '9', '8', '.', '.', '.', '.', '6', '.'}
                , {'8', '.', '.', '.', '6', '.', '.', '.', '3'}
                , {'4', '.', '.', '8', '.', '3', '.', '.', '1'}
                , {'7', '.', '.', '.', '2', '.', '.', '.', '6'}
                , {'.', '6', '.', '.', '.', '.', '2', '8', '.'}
                , {'.', '.', '.', '4', '1', '9', '.', '.', '5'}
                , {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
        System.out.println(new Solution().isValidSudoku(board));
    }
}
