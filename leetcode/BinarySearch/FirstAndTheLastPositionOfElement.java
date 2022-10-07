package leetcode.BinarySearch;

class FirstAndTheLastPositionOfElement{
public int[] searchRange(int[] nums, int target) {
        int[] ans = {-1,-1};
        // we will be dividing the searching in two parts as starting searching from 
        // starting index or start searching form the end part
        int startIndex = binarySearch(nums,target,true);
        int endIndex = binarySearch(nums,target,false);
        ans[0] = startIndex;
        ans[1] = endIndex;
        return ans;
    }
    
    
    public int binarySearch(int[] nums, int target,boolean isSearchingFromStart){
        int ans = -1;
        int start = 0;
        int end = nums.length - 1;
        // search in simple binary search
        while(start <= end){
            int mid = start + (end - start)/2;
            // if mid element is greater then target then search in left side by change 
            // the position of end
            if(nums[mid] > target){
                end = mid - 1;
            // if mid is less the target then search in right by changing the position 
            // of the start index 
            }else if(nums[mid] < target){
                start = mid + 1;
            }else{
                // if we found target the search for the start point on left and end point
                // form the right
                ans = mid;
                if(isSearchingFromStart){
                    end = mid - 1;
                }else{
                    start = mid+1;
                }
            }
        }
        return ans;
        
    }
}