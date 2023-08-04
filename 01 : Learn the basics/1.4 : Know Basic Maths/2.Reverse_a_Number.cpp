// Question Link : https://www.codingninjas.com/studio/problems/reverse-bits_2181102?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
long reverseBits(long n) {
    // Write your code here.
    unsigned long ans = 0;
    int i = 0;
    unsigned int one = 1;

    while(n){
        int bit = n & 1;
        if(bit)
            ans = ans | (one<<(31-i));
        
        n >>= 1;
        i++;
    }

    return ans;
}



// Question Link : https://leetcode.com/problems/reverse-integer/
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
};




// Question Link - gfg : https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
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
