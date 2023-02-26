// Link : https://practice.geeksforgeeks.org/problems/square-pattern-1662287714/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_21


class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i=1;i<=n;i++) {
            for(int j=1; j<=n; j++) {
                if(i==1 || i==n || j==1 || j==n)
                    cout << "*";
                else
                    cout << " ";
            }  
            cout << endl;
        }
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)