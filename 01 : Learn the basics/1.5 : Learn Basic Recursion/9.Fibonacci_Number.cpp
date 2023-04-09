// Question Link -> GFG: https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-first-n-fibonacci-numbers




/*#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    // Time Complexity: O(2^n), Space Complexity: O(n)
    long long fib(int n) {
        if(n <= 1)
            return n;
        
        return fib(n-1)+fib(n-2);
    }
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) {
        //code here
        vector<long long> v;
        
        for(int i=1; i<=n; i++)
            v.push_back(fib(i));
        
        return v;
    }
};

//{ Driver Code Starts.
int main() {
     //taking total testcases
    int t;
    cin>>t;
    while(t--) {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }

	return 0;
}

// } Driver Code Ends*/



// Question Link -> Leetcode: https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    // Time Complexity: O(2^n), Space Complexity: O(n)
    int fib(int n) {
        if(n <= 1)
            return n;
        
        return fib(n-1)+fib(n-2);
    }
};