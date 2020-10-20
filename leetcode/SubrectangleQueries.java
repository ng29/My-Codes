package practice;

/**
 * Link: https://leetcode.com/problems/subrectangle-queries/
 */

class SubrectangleQueries {

    int[][] rectangle;

    public SubrectangleQueries(int[][] rectangle) {
        this.rectangle = rectangle;
    }

    public void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for (int i = row1; i <= row2; i++) for (int j = col1; j <= col2; j++) rectangle[i][j] = newValue;
    }

    public int getValue(int row, int col) {
        return rectangle[row][col];
    }
}
