// Question Link: https://www.codingninjas.com/studio/problems/fa-1-ece_4606261?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include <iostream>
using namespace std;

int Maximum(int x, int y) {
	// Write your code here.
	return (x >= y) ? x : y;
}

void Swap(int &x, int &y) {
	// Write your code here.
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

}

int main() {
	int test, a, b, r;
	cin >> test;
	cin >> a >> b;

	switch (test) {
		case 1:
			r = Maximum(a, b);
			cout << r;
			break;
		case 2:
			Swap(a, b);
			cout << a << " " << b;
			break;
		default:
			cout << "Invalid test option";
	}

	return 0;
}




// Question Link : https://practice.geeksforgeeks.org/problems/pass-by-reference-and-value/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pass-by-reference-and-value

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Time Complexity = O(1), Space Complexity = O(1)
    vector<int> passedBy(int a, int &b) {
        // code here
        
        /*vector<int> ans;
        
         ans.push_back(a + 1);
         ans.push_back(b + 2);
         
         return ans;*/
         
         return {a+1, b+2};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        Solution obj;
        vector<int> ans = obj.passedBy(a, b);
        cout << ans[0] << " " << ans[1] << "\n";
    }

    return 0;
}

// } Driver Code Ends
