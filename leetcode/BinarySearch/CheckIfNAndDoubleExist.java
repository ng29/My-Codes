package leetcode.BinarySearch;

public class CheckIfNAndDoubleExist {
      
    public static boolean checkIfExist(int[] arr) {
        // if the arr size is two then we will check if the arr[0] is 2*arr1
        // of arr0/2 == arr1 the true else false
    if(arr.length == 2){
       if(arr[0] == 2*arr[1] || arr[0]/2 == arr[1]){
           return true;
       }
       return false;
     }
     // here we will check for every value and pass to binery search array
       for(int i = 0;i < arr.length;i++){
           if(binarySearch(arr,(2*arr[i]),i)){
               return true;
           }
           if(arr[i] % 2 == 0 && binarySearch(arr,(arr[i]/2),i)){
               return true;
           }
       }
       return false;
    }
    public static boolean binarySearch(int[] arr,int target,int i){
        int start = i+1;
        int end = arr.length-1;
        while(start <= end){
            int mid = start +(end - start)/2;
            if(arr[mid] == target || arr[start] == target || arr[end] == target){
                return true;
            }else {
                start = start + 1;
                end = end - 1;
            }
        }
        return false;
    }
}
