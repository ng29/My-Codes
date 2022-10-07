package leetcode.BinarySearch;

public class ValidPerfectSqure{
    // this is similar to sqrt problem just need to return true or false
      public boolean isPerfectSquare(int num) {
        long start = 1;
        long end = num;
        while(start <= end){
            long mid = start + (end - start)/2;
            if(mid*mid < num){
                start = mid + 1;
            }else if(mid*mid > num ){
                end = mid - 1;
            }else{
                return true;
            }
        }
        return false;
    }
}