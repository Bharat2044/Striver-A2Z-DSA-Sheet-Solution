// Link : https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_8

class Solution{
public:
	void printTriangle(int n) {
	    // code here
	    for(int i=1; i<=n; i++){
            for(int j=1; j<=i-1; j++)
                cout<<" ";
                
            for(int j=1; j<=2*n-2*i+1; j++)
                cout<<"*";
                
            cout<<endl;
        }
	}
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)