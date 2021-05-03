class Solution {
public:
    bool isPalindrome(int x) {
        if ((x < 0) || ((x != 0) && (x % 10 == 0))) {           // base cases (x is negative, x's last digit is 0 (first digit cannot be 0))
            return false;
        } 
        
        int reverse = 0;                                        // initializing before iteration
        
        while (x > reverse) {                                   
            reverse = (reverse * 10) + (x % 10);                // pushing 
            x = x/10;                                           // popping
        }
        
        return ((x == reverse) || (x == reverse/10));           // true if reverse = x (with or without middle digit of original x)
    }
};
