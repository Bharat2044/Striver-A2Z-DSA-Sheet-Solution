// Link : https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_17

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n-i; j++)
                cout << " ";
                
            for(int j=1; j<=i; j++)
                cout << (char)('A'-1+j);
                
            for(int j=1; j<i; j++)
                cout << (char)('A'-j+i-1);
            cout << endl;
        }
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)