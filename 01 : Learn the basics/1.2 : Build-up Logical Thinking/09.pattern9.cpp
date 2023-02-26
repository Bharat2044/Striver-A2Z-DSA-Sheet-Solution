// Link : https://practice.geeksforgeeks.org/problems/pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_9

class Solution {
  public:
    void printDiamond(int n) {
        // upper part
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++)
                cout<<" ";
                
            for(int j=1; j<=i; j++)
                cout << "* ";
            cout << endl;
        }
        // lower part
        for(int i=n; i>=1; i--){
            for(int j=1; j<=n-i; j++)
                cout<<" ";
                
            for(int j=1; j<=i; j++)
                cout << "* ";
            cout << endl;
        }
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)