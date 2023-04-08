// Question Link: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=palindrome-string



 
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
    // Time Complexity: O(N), Space Complexity: O(N)
	int func(string s, int i) {
	    // If i exceeds half of the string means all the elements are compared, we return true.
        if(i >= s.length()/2) 
            return 1;
        
        // If the start is not equal to the end, not the palindrome.
        if(s[i] != s[s.length()-i-1]) 
            return 0;
        
        // If both characters are the same, increment i and check start+1 and end-1.
        return func(s, i+1);
	}
	
	int isPalindrome(string S) {
	    // Your code goeS here
	    return func(S, 0);
	}

};

//{ Driver Code Starts.

int main() {
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--) {
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends