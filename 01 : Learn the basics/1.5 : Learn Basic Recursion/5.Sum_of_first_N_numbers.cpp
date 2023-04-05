// Question Link: https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=sum-of-first-n-terms



#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Time Complexity: O(n), Space Complexity: O(n)
    long long sumOfSeries(long long N) {
        // code here
        if(N == 0)
            return 0;
        
        return (pow(N,3) + sumOfSeries(N-1));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends



/*#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n), Space Complexity: O(n)
int func(int n){
   if(n == 0)
       return 0;
   
   return n + func(n-1);
}

int main(){
  int n;
  cin >> n;

  cout << func(n) << endl;

  return 0;
}*/