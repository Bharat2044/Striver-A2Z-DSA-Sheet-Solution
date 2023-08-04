// Question Link: https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char ch;
	cin >> ch;

	if(ch >= 'A' && ch <= 'Z')
		cout << 1;
	else if(ch >= 'a' && ch <= 'z')
		cout << 0;
	else 
		cout << -1;

	return 0;	
}





// Question Link : https://practice.geeksforgeeks.org/problems/c-input-output2432/1


#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:

    // Time Complexity = O(1), Space Complexity = O(1)
    int multiplication(int A, int B) {
        // code here 
        return A*B;
    }
};

//{ Driver Code Starts.
int main() { 
    int t;
    cin>>t;
    
    while(t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.multiplication(A,B) << endl;
    }

    return 0; 
} 
