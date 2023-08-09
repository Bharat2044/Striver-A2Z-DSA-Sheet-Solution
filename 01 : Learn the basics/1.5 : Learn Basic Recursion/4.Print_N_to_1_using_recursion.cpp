// Question Link: https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// Time Complexity = O(n), Space Complexity = O(n)
void solve(vector<int> &output, int x) {
    if(x == 0) 
        return;
    
    output.push_back(x);
    solve(output, x-1);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> output;
    solve(output, x);

    return output;
}



// Question Link: https://practice.geeksforgeeks.org/problems/print-n-to-1-without-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-n-to-1-without-loop
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Time Complexity: O(N), Space Complexity: O(N)
    void printNos(int N) {
        // code here
        if(N == 0)
            return;
            
        cout<<N<<" ";
        
        printNos(N-1);
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
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends