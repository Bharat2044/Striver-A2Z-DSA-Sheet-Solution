// Link : https://practice.geeksforgeeks.org/problems/triangle-pattern-1662284916/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_14

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=i; j++)
                cout << (char)('A'+j-1);
            cout << endl;
        }
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)