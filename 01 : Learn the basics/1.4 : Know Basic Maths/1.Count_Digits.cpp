// Link : https://practice.geeksforgeeks.org/problems/count-digits5716/1



#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:

    // Time Complexity = O(logn), Space Complexity = O(1)
    int evenlyDivides(int n) {
        //code here

        int count = 0;
        int t = n;
        
        while(n != 0){
            int d = n%10;

            if(d!=0 && t%d==0)
                count++;
            n /= 10;
        }

        return count;
    }
};

//{ Driver Code Starts.
int main()  { 
    int t;
    cin>>t;

    while(t--) {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }

    return 0; 
}
// } Driver Code Ends
