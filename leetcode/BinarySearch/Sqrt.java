package leetcode.BinarySearch;

public class Sqrt {
    // will be using binary serach 
    // always remember when ever you will see sorted array then try to apply binary 
    // search algo to find the ans
        public int mySqrt(int num) {
        long start = 0;
        long end = num;
        while (start <= end ){
            long mid = start + (end - start)/2;
            // here we check if the mid* mid is squre root of the given number
            //as we have use long because after multiplying the value it will exceed 
            // the capicity of the int
            if(mid*mid < num){
                start = mid +1;
            }else if(mid*mid > num){
                end = mid - 1 ;
            }else{
                return (int)mid;
            }
        }
                return (int)end;
    }
}
