// Question Link: https://practice.geeksforgeeks.org/problems/factorial5739/1




#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:

    // Time Complexity: O(N), Space Complexity: O(N)
    long long int factorial(int N){
        //code here
        if(N == 0 || N == 1)
            return 1;
            
        return N*factorial(N-1);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends