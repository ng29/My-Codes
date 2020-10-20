package practice;

/**
 * Link: https://leetcode.com/problems/jump-game-ii/
 */

public class JumpGameII {

    public static int jump(int[] nums) {
        int index = 0, noOfJumps = 0;
        int length = nums.length - 1;

        if (length < 1)
            return 0;

        while (index < length) {
            index += optimalJump(nums, index);
            noOfJumps++;
        }
        return noOfJumps;
    }

    public static int optimalJump(int[] nums, int index) {
        int max = 0, indexOfMax = 0;
        for (int i = 1; i <= nums[index]; i++) {
            if (index + i >= nums.length - 1) {
                indexOfMax = i;
                break;
            }
            if (nums[index + i] + i >= indexOfMax + max) {
                max = nums[index + i];
                indexOfMax = i;
            }
        }
        return indexOfMax;
    }
}
