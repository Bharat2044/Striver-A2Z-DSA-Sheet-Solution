// Link - gfg : https://practice.geeksforgeeks.org/problems/palindrome0746/1

class Solution {
	public:
		string is_palindrome(int n) {
		    // Code here.
		    int rev = 0;
		    int x = n;
		    while (x != 0) {
		        int d = x%10;
		        rev = rev*10 + d;
		        x /= 10;
		    }
		    
		    return (rev == n) ? "Yes" : "No";
		}
};
// Time Complexity = O(logx)
// Space Complexity = O(1)


// Link - Leetcode : https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    int reverse(int n){
        int ans = 0;
        
        while(n != 0){
            int d = n%10;
            if(ans > INT_MAX/10 || ans < INT_MIN/10)
                return false;
            ans = (ans*10)+ d;
            n/=10;
        }
        return ans;
    }
    
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int y = reverse(x);
        
        return x == y;       
    }
};
// Time Complexity = O(logx)
// Space Complexity = O(1)