package practice;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * Link: https://leetcode.com/problems/first-missing-positive/description/
 */

public class FirstMissingPositive {

    public static int firstMissingPositive(int[] nums) {
        int length = nums.length - 1;

        if (length == -1)
            return 1;

        if (length == 0)
            if (nums[0] == 1)
                return 2;
            else
                return 1;

        Arrays.sort(nums);
        boolean checkIfIsOne = true;
        if (nums[0] > 1)
            return 1;

        for (int i = 0; i <= nums.length; i++) {
            if (nums[i] < 1 && i != length)
                continue;

            if (checkIfIsOne) {
                if (nums[i] != 1)
                    return 1;
                checkIfIsOne = false;
            }

            if (nums[i] > 0 && i < length) {
                if (nums[i + 1] - nums[i] > 1)
                    return nums[i] + 1;
            }

            if (i == length) {
                if (nums[i] > i + 1)
                    return 1;
                return nums[i] + 1;
            }


        }
        return 1;
    }
}
