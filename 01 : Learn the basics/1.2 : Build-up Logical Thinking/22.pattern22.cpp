// Link : https://practice.geeksforgeeks.org/problems/square-pattern-1662666141/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_22


class Solution {
  public:
    void printSquare(int n) {
        // code here
        int k = 2*n-1;
        
        for(int i=1; i<=k; i++){
            for(int j=1; j<=k; j++) 
                cout << max(abs(i-n), abs(j-n))+1<<" ";
            cout << endl;
        }
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)