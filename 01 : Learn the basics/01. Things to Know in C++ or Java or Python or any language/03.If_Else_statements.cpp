// Question Link: https://www.codingninjas.com/studio/problems/if-else-decision-making_8357235?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

string compareIfElse(int a, int b) {
	// Write your code here
	if(a > b)
		return "greater";
	else if(a < b)
		return "smaller";
	else
		return "equal";
}







// Question Link : https://practice.geeksforgeeks.org/problems/java-if-else-decision-making0924/0?category%5B%5D=Java&category%5B%5D=Java&difficulty%5B%5D=-2&page=1&query=category%5B%5DJavadifficulty%5B%5D-2page1category%5B%5DJava

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Time Complexity = O(1), Space Complexity = O(1)
    string compareNM(int n, int m){
        // code here
        if(n == m)
            return "equal";
        else if(n > m)
            return "greater";
        else
            return "lesser";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }

    return 0;
}