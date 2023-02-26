// Link : https://practice.geeksforgeeks.org/problems/triangle-number-1661489840/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_6

class Solution{
public:
	void printTriangle(int n) {
	    // code here
	    for(int i=1; i<=n; i++){
            for(int j=1; j<=n+1-i; j++)
                cout << j << " ";
            cout << endl;
        }
	}
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)