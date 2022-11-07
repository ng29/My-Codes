package leetcode.BinarySearch;

/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class FirstBadVersion {
        public int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int ans = 0;
        // here they have provided the funtion of badVersion which will return the 
        // if the version is true or false
        if(isBadVersion(start)){
            return start;
        }
        while(start <= end){
            int mid = start +(end - start)/2;
            if(isBadVersion(mid)){
                // where the mide version is bad means we can save the ans  
                //and try to check finding the first bad version by changing the 
                // end index position
                ans  = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return ans;       
    }
}
