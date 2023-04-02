// Link : https://practice.geeksforgeeks.org/problems/c-input-output2432/1


#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:

    // Time Complexity = O(1), Space Complexity = O(1)
    int multiplication(int A, int B) {
        // code here 
        return A*B;
    }
};

//{ Driver Code Starts.
int main() { 
    int t;
    cin>>t;
    
    while(t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.multiplication(A,B) << endl;
    }

    return 0; 
} 
