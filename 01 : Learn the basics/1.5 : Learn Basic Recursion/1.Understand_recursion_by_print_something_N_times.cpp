// Link : https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-1-to-n-without-using-loops



#include <bits/stdc++.h>
using namespace std;


// Time Complexity : O(N), Space Complexity : O(N)
class Solution{
    public:
    //Complete this function

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


