class Solution {
public:
    int reverse(int x) {
        int reverse = 0;                                                                        // reverse is zero before iteration
        
        while (x != 0) {
            int digit = x % 10;                                                                 // popping digit
            x /= 10;
            
            if ((reverse > INT_MAX/10) || ((reverse == INT_MAX/10) && (digit > 7))) {           // checking for positive overflow
                return 0;
            }
            
            if ((reverse < INT_MIN/10) || ((reverse == INT_MIN/10) && (digit < -8))) {          // checking for negative overflow
                return 0;
            }
            
            reverse = (reverse * 10) + digit;                                                   // pushing digit
        }
        
        return reverse;
    }
};
