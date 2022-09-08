/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
      int mini = 0,maxi = n,mid;
        while(true)
        {
            mid = mini + (maxi - mini)/2;
            int res = guess(mid);
            if(res==0)
                return mid;
            else if(res == 1)
                mini = mid+1;
            else
                maxi = mid-1;
        }
        return 0;  
    }
};