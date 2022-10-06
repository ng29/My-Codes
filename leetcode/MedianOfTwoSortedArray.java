package com.leetcode;

public class MedianOfTwoSortedArrays {
    static class Solution {
        public double findMedianSortedArrays(int[] nums1, int[] nums2) {
            if (nums1.length > nums2.length) {
                return findMedianSortedArrays(nums2, nums1);
            }
            int x = nums1.length;
            int y = nums2.length;
            int start = 0;
            int end = x;

            while (start <= end) {
                int partitionX = (start + end) / 2;
                int partitionY = (x + y + 1) / 2 - partitionX;

                int leftX = (partitionX == 0) ? Integer.MIN_VALUE : nums1[partitionX - 1];
                int rightX = (partitionX == x) ? Integer.MAX_VALUE : nums1[partitionX];

                int leftY = (partitionY == 0) ? Integer.MIN_VALUE : nums2[partitionY - 1];
                int rightY = (partitionY == y) ? Integer.MAX_VALUE : nums2[partitionY];

                if (leftX <= rightY && leftY <= rightX) {
                    if ((x + y) % 2 == 0) {
                        return (double) (Math.max(leftX, leftY) + Math.min(rightX, rightY)) / 2;
                    } else {
                        return (double) Math.max(leftX, leftY);
                    }
                } else if (leftX > rightY) {
                    end = partitionX - 1;
                } else {
                    start = partitionX + 1;
                }
            }
            return 0;
        }
    }

    public static void main(String[] args) {
        int[] nums1 = {1,2,3,4,5};
        int[] nums2 = {6,7,8,9,12};
        System.out.println(new Solution().findMedianSortedArrays(nums1, nums2));
    }
}
