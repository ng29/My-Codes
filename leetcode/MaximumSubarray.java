package practice;

/**
 * Link: https://leetcode.com/problems/maximum-subarray/
 */
public class MaximumSubarray {

    public static int maxSubArray(int[] nums) {
        int absoluteMax = nums[0], localMax = nums[0], nextSum = 0, currentElement = 0;

        for (int i = 1; i < nums.length; i++) {
            currentElement = nums[i];
            nextSum = localMax + currentElement;
            localMax = Math.max(nums[i], nextSum);
            absoluteMax = Math.max(absoluteMax, localMax);
        }

        return absoluteMax;
    }

}
