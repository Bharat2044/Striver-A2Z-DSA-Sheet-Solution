// Question Link: https://www.codingninjas.com/studio/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
int countDigits(int n){
	// Write your code here.	
	int count = 0;
	int x = n;

	while(n > 0) {
		if((n%10 != 0) && (x % (n%10) == 0))
			count++;

		n /= 10;
	}

	return count;
}




// Question Link : https://practice.geeksforgeeks.org/problems/count-digits5716/1
#include<bits/stdc++.h> 
using namespace std;

class Solution{
public:

    // Time Complexity = O(logn), Space Complexity = O(1)
    int evenlyDivides(int n) {
        //code here

        int count = 0;
        int t = n;
        
        while(n != 0){
            int d = n%10;

            if(d!=0 && t%d==0)
                count++;
            n /= 10;
        }

        return count;
    }
};

//{ Driver Code Starts.
int main()  { 
    int t;
    cin>>t;

    while(t--) {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }

    return 0; 
}
// } Driver Code Ends
