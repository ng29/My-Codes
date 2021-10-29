package practice;

public class HouseRobber {

    public static void main(String[] args) {
        System.out.println(rob(new int[] {1, 2, 3, 1}));
        System.out.println(rob(new int[] {2, 7, 9, 3, 1}));
        System.out.println(rob(new int[] {4, 2, 2, 4}));
    }

    public static int rob(int[] nums) {
        int cur = 0, pre = 0;
        for (int num: nums) {
            int temp = Math.max(pre + num, cur);
            pre = cur;
            cur = temp;
        }
        return cur;
    }

}
