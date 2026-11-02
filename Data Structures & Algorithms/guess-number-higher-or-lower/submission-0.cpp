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
        int l = 1, myGuess = n/2; 
        
        while(l<=n){
            int guessed = guess(myGuess);
            if(guessed<0){
                myGuess/=2;
            }else if(guessed > 0){
                myGuess+=myGuess/2;
            }
            else{
                return myGuess;
            }
        }
        return 0;
    }
};