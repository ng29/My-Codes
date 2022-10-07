package leetcode.BinarySearch;

class SerachInRotatedSortedArray{
   public int search(int[] array, int target) {
       // this will find the index point where the array is been rotated
        int pivot = findPivot(array);
        // if it return -1 means array is not rotated which means simple binary search
        if(pivot == -1){
            return binarySearch(array, 0, array.length-1,target);
        }

        // if the target is == to pivot(the gretest value) then return pivot 
        if(array[pivot] == target){
            return pivot;
        }

        // if first value of array is  less then target then we have to find the target
        // on the left side of array as pivot will be the end point
        if(array[0] <= target){
            return binarySearch(array, 0, pivot-1,target);
        }

        // else target is greater then first then serach on right side of the array 
        // with pivot as the starting point
           return  binarySearch(array, pivot+1, array.length-1,target);
    }
    
    public int findPivot(int[] array){
        int start = 0;
        int end = array.length -1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(mid < end && array[mid] > array[mid+1]){
                return mid;
            }else if(mid > start && array[mid] < array[mid - 1]){ 
                return mid - 1;
            }else if(array[start] >= array[mid]){
                end = mid - 1;
            }else if(array[start] <= array[mid]){
                start = mid + 1;
            }else{
                return mid;
            }
        }
        return -1;
    }

    public int binarySearch(int[] array,int start,int end,int target){
        while(start <= end){
            int mid = start +(end - start)/2;
            if(array[mid] < target){
                start = mid + 1;
            }else if(array[mid] > target){
                end = mid - 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
}