// Question Link : https://practice.geeksforgeeks.org/problems/print-gfg-n-times/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-gfg-n-times



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    void printGfg(int N) {
        // Code here

        /* Approach - 1 : Time Complexity : O(N) , Space Complexity : O(N)
        if(N == 0)
            return;
            
        cout<<"GFG"<<" ";
        printGfg(N-1);*/
        
        
        // Approach - 2 : Time Complexity : O(N) , Space Complexity : O(N)
        if(N == 0)
            return;
            
        printGfg(N-1);
        cout<<"GFG"<<" ";
    }
};


//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printGfg(N);
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends