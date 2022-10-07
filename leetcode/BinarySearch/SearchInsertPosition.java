package leetcode.BinarySearch;

public class SearchInsertPosition {
    // this is similer solution as floor of the giving target number 
    // floor means - get the greater smallest value form the given target
    // where we have to find the index of value which is greater smallest of the target value 
    // if the target is not present in the array
      public int searchInsert(int[] nums, int target) {
        int start = 0;
        int end = nums.length-1;
        // if the target is greater then the last value of the array which mean the position
        // of the give target will the length of the array.
        if(target > nums[end]){
            return nums.length;
        }
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] < target){
                start = mid + 1;
            }else if(nums[mid] > target){
                end = mid - 1;
            }else{
                return mid;
            }
        }
        // if we don't found the target then we will return the start index becuase the 
        // while loop will exit when the the target is not and start cross the end value 
        // where start will pointing the greater smallest value of target value;
        return start;
        
    }
}
