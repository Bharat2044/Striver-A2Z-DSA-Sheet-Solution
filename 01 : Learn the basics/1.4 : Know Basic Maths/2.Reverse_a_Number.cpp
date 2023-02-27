// Link - gfg : https://practice.geeksforgeeks.org/problems/reverse-bits3556/1

/*class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        long long sum = 0;
        int p = 31;
        
        while(x != 0){
            int r = x%2;
            if(r == 1)
                sum += pow(2, p);
            x /= 2;
            p--;
        }
        return sum;
    }
};*/
// Time Complexity = O(logx)
// Space Complexity = O(1)



// Link - Leetcode : https://leetcode.com/problems/reverse-integer/submissions/

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while(x != 0) {
            int d = x%10;
            if(ans < INT_MIN/10 || ans > INT_MAX/10)
                return 0;
            ans = (ans * 10) + d;
            x /= 10;
        }
        return ans;
    }
};

// Time Complexity = O(logx)
// Space Complexity = O(1)