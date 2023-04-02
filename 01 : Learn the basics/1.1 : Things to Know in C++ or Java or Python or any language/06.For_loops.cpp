// Link : https://practice.geeksforgeeks.org/problems/for-loop-primecheck-java/1


#include <bits/stdc++.h>
using namespace std;

// Time Complexity = O(sqrt(N)), Space Complexity = O(1)
void isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        // code here
        if(n % i == 0 ) {
            cout << "No" << endl;
            return;
        }
    }
    
    if(n == 1 )
        cout << "No";
    else
        cout << "Yes";
    cout << endl;
}

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        isPrime(n);
    }
    return 0;
}
// } Driver Code Ends
