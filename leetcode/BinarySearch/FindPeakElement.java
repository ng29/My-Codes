package leetcode.BinarySearch;

public class FindPeakElement {
    // this is similar to finding pivot
       public int findPeakElement(int[] nums) {
        int start = 0;
         int mid  = 0;
        int end = nums.length-1;
        while(start != end){
             mid = start + (end - start)/2;
            if(nums[mid+1] > nums[mid]){
                start = mid + 1;
            }else{
                 end = mid;
            }
        }
    // the loop will exist when start == end so we can pass any value start or end
        return start;
    }
}

