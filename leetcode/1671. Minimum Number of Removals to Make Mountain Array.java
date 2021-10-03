/*
// Submitted by Sanjoy Saha
// Github - https://github.com/SanjoySaha24

/* 1671. Minimum Number of Removals to Make Mountain Array
link - https://leetcode.com/problems/minimum-number-of-removals-to-make-mountain-array/

Example :

Input: nums = [1,3,1]
Output: 0
Explanation: The array itself is a mountain array so we do not need to remove any elements.

Constraints:

3 <= nums.length <= 1000
1 <= nums[i] <= 109
It is guaranteed that you can make a mountain array out of nums.

*/

class Solution {
    public int minimumMountainRemovals(int[] nums) {

        List<Integer> ascending = new ArrayList<>();
        // al1.get(i) longest ascending subsequence, end with nums[i]

        List<Integer> al1 = new ArrayList<>(nums.length);
        ascending.add(nums[0]);
        al1.add(1);
        for (int i = 1; i < nums.length-1; i++) {
            constructSubsequence(ascending, al1, nums[i]);
        }

        List<Integer> descending = new LinkedList<>();
        // al2.get(i) longest descending subsequence, start with nums[nums.length-1-i]

        List<Integer> al2 = new ArrayList<>(nums.length);
        descending.add(nums[nums.length-1]);
        al2.add(1);
        for (int i = nums.length-2; i > 0; i--) {
            constructSubsequence(descending, al2, nums[i]);
        }

        int maxMountainSize = 0;
        for (int i = 1; i < nums.length-1; i++) {
            int left = al1.get(i) - 1;
            int right = al2.get(nums.length-1-i) - 1;
            // if left or right is 0, not a valid mountain

            if (left*right > 0) {
                maxMountainSize = Integer.max(maxMountainSize, left + right + 1);
            }
        }
        return nums.length-maxMountainSize;
    }

    /**
     * @param magic sorted list
     * @param res   longest ascending/descending subsequence
     * @param value value to process
     */
    private void constructSubsequence(List<Integer> magic, List<Integer> res, int value) {
        int index = Collections.binarySearch(magic, value);
        if (index >= 0) {
            // if found, just add to res, nothing need to do with magic
            res.add(index+1);
        } else {
            // add to res and change magic
            int realInsertIndex = -index - 1;
            res.add(realInsertIndex+1);
            if (realInsertIndex == magic.size()) {
                // append value to magic
                magic.add(realInsertIndex, value);
            } else {
                // magic.get(realInsertIndex) < value, so we replace it by value
                magic.set(realInsertIndex, value);
            }
        }
    }

    static public void test() {
        Solution s = new Solution();
        System.out.println(s.minimumMountainRemovals(new int[]{1,3,1}) == 0);
        System.out.println(s.minimumMountainRemovals(new int[]{2,1,1,5,6,2,3,1}) == 3);
        System.out.println(s.minimumMountainRemovals(new int[]{4,3,2,1,1,2,3,1}) == 4);
        System.out.println(s.minimumMountainRemovals(new int[]{1,2,3,4,4,3,2,1}) == 1);
        System.out.println(s.minimumMountainRemovals(new int[]{100,92,89,77,74,66,64,66,64}) == 6);
    }

}