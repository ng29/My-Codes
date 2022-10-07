package leetcode.BinarySearch;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

 // they have provided the Interface which has method guess will return if the number provided
 // is higher or lower or equal
public class GuessNumberHigherOrLower {
     public int guessNumber(int n) {
        int start = 0;
        int end = n;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(guess(mid) == 1){
                start = mid + 1;
            }else if(guess(mid) == -1){
                end = mid - 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
    
}
