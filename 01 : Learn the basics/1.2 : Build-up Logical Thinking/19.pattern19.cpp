// Link : https://practice.geeksforgeeks.org/problems/double-triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_19


class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n-i+1; j++)
                cout << "*";
                
            for(int j=1; j<=2*i-2; j++)
                cout << " ";
                
            for(int j=1; j<=n-i+1; j++)
                cout << "*";
            cout << endl;
        }
        
        for(int i=n;i>=1;i--) {
            for(int j=1; j<=n-i+1; j++)
                cout << "*";
                
            for(int j=1; j<=2*i-2; j++)
                cout << " ";
                
            for(int j=1; j<=n-i+1; j++)
                cout << "*";
            cout << endl;
        }
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)