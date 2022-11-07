package leetcode.BinarySearch;

public class SplitArrayLargestSum {
    // here even if the array is not sorted does't mean we cannot use binary search
    // we'v to find the minimized largest sum of the split which aries a question
    // what will be the min value and larget value we can have afte spliting
    // let say min value - split the array into n part(e.i the array.length part)
    // which will give and single value of every values in array then the 
    // min value will be the larget value of the array
    // max value - which we split the array in 1 array that is array it self then the 
    // max value will be the addition of all values in the array 
    // eg - [7,2,5,10,8] min - 10 & max - 32 then our answer will lies between [10,30]
    // where we found the array which is sorted which mean apply binary search
    public int splitArray(int[] array, int m) {
         int end = 0;
        int start = array[0];
        // we found min and max value of th array
        for(int i : array){
            if(start <= i){
                start = i;
            }
            end = end + i;
        }
        // [10,32] we will apply the binary search 
        // let take mid and check if the value we need is the ans 
        while(start < end){
            int mid = start + (end -start)/2; 
            int piceses = 1;
            int max = 0;
            // here we split the array in pices as per mid value
            for(int i : array){
                if(max + i > mid){
                    max = i;
                    piceses++;
                }else{
                    max += i;
                }
            }

            // we check if the pices is less then the give m number if less then we will 
            // check the aproxx. ans in left else in right if the pices is equal then 
            // we will get the one condition where the start == end which is our ans
            if(piceses > m){
                start = mid +1;
            }else{
                end = mid;
            }

        }
        return end;
    }
}
