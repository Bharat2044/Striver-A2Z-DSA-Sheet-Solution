// Link : https://practice.geeksforgeeks.org/problems/for-loop-primecheck-java/1

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

// Time Complexity = O(sqrt(n))
// Space Complexity = O(1)