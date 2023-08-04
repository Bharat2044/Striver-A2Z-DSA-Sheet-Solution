// Question Link: https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<iostream>
using namespace std;

int fibonacci(int n) {
	/*if(n==1 || n==2)
		return 1;

	return fibonacci(n-1)+fibonacci(n-2);*/

	int a = 0, b = 1;
	for(int i=1; i<=n; i++) {
		int c = a+b;
		a = b;
		b = c;
	}

	return a;
}

int main() {
	int n;
	cin >> n;

	cout << fibonacci(n);

	return 0;
}





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
