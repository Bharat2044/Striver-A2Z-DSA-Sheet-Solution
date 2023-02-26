// Link : https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718712/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_13

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int count = 1;
        
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=i; j++)
                cout << count++ << " ";
            cout << endl;
        }
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)