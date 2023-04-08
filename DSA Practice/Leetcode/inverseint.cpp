#include<limits.h>


class Solution {
public:
    int reverse(int x) {
        
        int ans  = 0;
        while( x != 0) {
            
            int digit = x % 10;

            //if the numebr goes out of bound i.e., out of range of int             
            if( (ans > INT_MAX/10) || (ans < INT_MIN/10)) {
                return 0;
            }
            
            ans = (ans * 10) + digit;
            x = x / 10;
            
        }
        return ans;
    }
};