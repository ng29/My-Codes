package com.leetcode;

import java.util.Arrays;

public class MoveZeroes {
    static class Solution {
        public void moveZeroes(int[] nums) {
            int zeroPointer = 0;
            int valPointer = 0;
            while (zeroPointer < nums.length - 1 && valPointer < nums.length - 1) {
                if (nums[zeroPointer] == 0) {
                    valPointer++;
                }
                if (zeroPointer != valPointer && nums[valPointer] != 0 && nums[zeroPointer] == 0) {
                    int temp = nums[valPointer];
                    nums[valPointer] = nums[zeroPointer];
                    nums[zeroPointer] = temp;
                    zeroPointer++;
                } else if (nums[zeroPointer] != 0) {
                    zeroPointer++;
                    valPointer++;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] nums = {5, 1, 50, 3, 12};
        new Solution().moveZeroes(nums);
        System.out.println(Arrays.toString(nums));
    }
}
