package com.leetcode;

public class ContainerWithMostWater {
    static class Solution {
        public int maxArea(int[] height) {
            int start = 0, end = height.length - 1;
            double maxArea = Math.min(height[start], height[end]) * (end - start);
            double area;
            while (start < end) {
                area = Math.min(height[start], height[end]) * (end - start);
                if (area > maxArea) {
                    maxArea = area;
                }
                if (height[start] < height[end]) {
                    start += 1;
                } else {
                    end -= 1;
                }
            }
            return (int) maxArea;
        }
    }

    public static void main(String[] args) {
        int[] h = {1,2,4,3};
        System.out.println(new Solution().maxArea(h));
    }
}
