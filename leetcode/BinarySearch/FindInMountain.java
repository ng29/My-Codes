package leetcode.BinarySearch;

//here they have provided the interface which contain the get() index and length 
// and catch is it should not call the get() function more then 100 times

/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */

public class FindInMountain {

     public int findInMountainArray(int target, MountainArray mountainArr) {
         // find the peakValue which ic pivot value
         // the array me contain duplicate
        int peakIndex = peakValue(mountainArr);
        
        // and check if the value present in left first as this is not sorted array                                   

        int leftSide = binarySearch(mountainArr, target, 0, peakIndex);
        
        // if value is present in left then return 
        if(leftSide != -1){
            return leftSide;
        }else{
        // else check if the value is present in right array
        return binarySearch(mountainArr, target, peakIndex+1, mountainArr.length()-1);
        }
    };
        public static int binarySearch (MountainArray array, int target,int startIndex,int endIndex){
      boolean isAscen = array.get(startIndex) < array.get(endIndex);

        while(startIndex <= endIndex){
          int  midIndex = (startIndex + endIndex) / 2 ;

         int midValue = array.get(midIndex);
          if (midValue == target){
              return midIndex;
          }

          if(isAscen){
          if(midValue < target){
              startIndex = midIndex + 1;
          }
          if(midValue > target){
              endIndex = midIndex - 1;
          }
          }else{
            if(midValue > target){
                startIndex = midIndex + 1;
            }
            if(midValue < target){
                endIndex = midIndex - 1;
            }
          }
          
        }
        return -1;
    };
    
    public static int peakValue(MountainArray array){
        int start = 0;
         int mid  = 0;
        int end = array.length()-1;
        while(start != end){
             mid = start + (end - start)/2;
            if(array.get(mid+1) > array.get(mid)){
                start = mid + 1;
            }else{
                 end = mid;
            }
        }
        return start;
    };
}
