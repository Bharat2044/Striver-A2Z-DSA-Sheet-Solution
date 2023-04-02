// Link - gfg : https://practice.geeksforgeeks.org/problems/reverse-bits3556/1



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Time Complexity = O(logx), Space Complexity = O(1)
    long long reversedBits(long long x) {
        // code here
        long long sum = 0;
        int p = 31;
        
        while(x != 0) {
            int r = x%2;
            
            if(r == 1)
                sum += pow(2, p);
                
            x /= 2;
            p--;
        }
        
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends
