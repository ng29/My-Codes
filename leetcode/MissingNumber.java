package practice;

/**
 * Link: https://leetcode.com/problems/missing-number/
 */

public class MissingNumber {

    public static void main(String[] args) {
        missingNumber(new int[]{1, 2, 3});
    }

    public static int missingNumber(int[] nums) {
        int length = nums.length - 1;
        int sum = (length * (length + 1)) / 2;
        return sum - getSum(nums);
    }

    public static int getSum(int[] nums) {
        int answer = 0;
        for(int num : nums) {
            answer += num;
        }
        return answer;
    }
}
