// Question Link : https://www.codingninjas.com/studio/problems/hcf-and-lcm_840448?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
int calcGCD(int n, int m){
    // Write your code here.
    if(m==0) 
        return n;

    return calcGCD(m, n%m);
}





// Question Link : https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    vector<long long> lcmAndGcd(long long a , long long b) {
        // Approach - 1  ==> Using predefined method
        /*vector<long long> v;
        long long x= __gcd(a,b);
        long long y= (a*b)/x;
        v.push_back(y);
        v.push_back(x);
        return v;*/
        
        // Approach - 2  ==> Using Naive Solution
        /*vector<long long> v;
        long long x = 1;
        for(int i=min(a,b); i>=1; i--) {
            if(a%i==0 && b%i==0) {
                x = i;
                break;
            }
        }
        long long y= (a*b)/x;
        v.push_back(y);
        v.push_back(x);
        return v;*/
        
        // Approach - 3  ==> Using Euclidean’s Algorithm
        /*vector<long long> v;
        long long m = a;
        long long n = b;
        while(m != n) {
            if(m > n)
                m = m-n;
            else
                n = n-m;
        }
        long long x = m;
        long long y = (a*b)/x;
        v.push_back(y);
        v.push_back(x);
        return v;*/
        
        // Approach - 4  ==> Using Optimized Euclidean’s Algorithm
        vector<long long> v;
        long long m = a;
        long long n = b;
        while(n != 0) {
            int rem = m%n;
            m = n;
            n = rem;
        }
        long long x = m;
        long long y = (a*b)/x;
        v.push_back(y);
        v.push_back(x);
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }

    return 0;
}
// } Driver Code Ends