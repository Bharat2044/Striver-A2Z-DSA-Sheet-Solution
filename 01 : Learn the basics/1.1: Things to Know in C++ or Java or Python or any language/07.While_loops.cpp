// Question Link: https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;

	int eSum = 0, oSum = 0;

	while(n > 0) {
		if((n%10) & 1)
			oSum += n%10;
		else	
			eSum += n%10;
		n /= 10;
	}

	cout << eSum << " " << oSum;

	return 0;
}







// Question Link : https://practice.geeksforgeeks.org/problems/while-loop-printtable/1

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