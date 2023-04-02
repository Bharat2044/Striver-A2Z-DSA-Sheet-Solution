// Link : https://practice.geeksforgeeks.org/problems/while-loop-printtable/1



#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

        // Time Complexity = O(1), Space Complexity = O(1)
        void printTable(int n) {
            for(int i=10; i>=1; i--)
                cout << n*i <<" ";
            cout<<endl;
        }  
};


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;

	while(t--) {
	    int n;
	    cin>>n;
	    Solution obj;
	    obj.printTable(n);	    
	}

	return 0;
}
// } Driver Code Ends