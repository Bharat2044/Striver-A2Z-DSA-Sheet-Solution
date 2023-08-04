// Question Link: https://www.codingninjas.com/studio/problems/print-1-to-n_628290?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
void solve(vector<int> &arr, int x) {
    if(x == 1) {
        arr.push_back(1);
        return;
    }
    else {
        solve(arr, x-1);
        arr.push_back(x);
    }    
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> arr;
    solve(arr, x);

    return arr;
}




// Question Link : https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-1-to-n-without-using-loops
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Complete this function

    // Time Complexity : O(N), Space Complexity : O(N)
    void printNos(int N) {
        //Your code here
        if(N==0)
            return;
        
        printNos(N-1);
        
        cout << N << " ";
    }
};

/* Driver program to test printNos */
int main() {
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--) {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }

    return 0;
}


