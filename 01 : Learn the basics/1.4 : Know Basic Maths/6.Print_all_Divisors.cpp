// Link - codestudio : https://www.codingninjas.com/codestudio/problems/print-all-divisors-of-a-number_1164188


#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// Approach - 1 : Time Complexity = O(n), Space Complexity = O(1)
/*void printDivisors(int n) {
    for(int i=1; i<=n; i++) {
        if(n%i == 0) 
            cout << i << " ";
    }
}*/

// Approach - 2 : Time Complexity = O(sqrt(n)), Space Complexity = O(n)
/*void printDivisors(int n) {
    vector<int> v;

    for(int i=1; i*i<=n; i++) {
        if(n%i == 0) {
            v.push_back(i);
            if((n/i) != i)
                v.push_back(n/i);
        }
    }

    sort(v.begin(), v.end());
    for(int it : v)
        cout << it << " ";
}*/

// Approach - 3 : Time Complexity = O(sqrt(n)), Space Complexity = O(1)
void printDivisors(int n) {
    int i;

    for(i=1; i*i<n; i++) {
        if(n%i == 0)
            cout << i << " ";
    }
    
    if(i-(n/i) == 1)
        i--;

    for(; i>=1; i--) {
        if(n%i == 0)
            cout << n/i << " ";
    }

}

int main() {
    int n;
    cin >> n;
    printDivisors(n);

    return 0;
}