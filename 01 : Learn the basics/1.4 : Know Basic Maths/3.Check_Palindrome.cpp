// Question Link: https://www.codingninjas.com/studio/problems/palindrome-number_624662?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
bool palindrome(int n) {
    // Write your code here
    int x = n;
    int rev = 0;

    while(n > 0) {
        int d = n%10;
        rev = rev*10+d;

        n /= 10;
    }

    return rev == x;
}





// Question Link: https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        
        while(n) {
            int d = n%10;
            
            if(rev>INT_MAX/10 || rev<INT_MIN/10)
                return 0;
            
            rev = (rev*10)+d;
            n /= 10;
        }
        
        return rev;
    }
    
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        return (x == reverse(x));
    }
};






// Question Link - gfg : https://practice.geeksforgeeks.org/problems/palindrome0746/1
#include<bits/stdc++.h>
using namespace std;

class Solutionn {
	public:

        // Time Complexity = O(logx), Space Complexity = O(1)
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

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends


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