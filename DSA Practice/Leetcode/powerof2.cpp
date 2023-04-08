#include<limits.h>

using namespace std;

// Leetcode solution for Power of 2
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ans = 1;
        
        for(int i = 0; i <= 30; i++) {
            if(ans == n)
            {
                return true;
            }
            // Taking power of 2 from beginning so that the time complexity decreases;
            if(ans < INT_MAX/2)
            ans = ans * 2;   
            
        }
        return false;
    }
};