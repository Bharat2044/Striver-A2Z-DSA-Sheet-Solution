// Question Link: https://www.codingninjas.com/studio/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
bool checkArmstrong(int n){
	//Write your code here
	int count = 0;
	int x = n, y = n;

	while(n > 0) {
		count++;
		n /= 10;
	}

	int sum = 0;
	while(x > 0) {
		int d = x%10;
		int power = pow(d, count);
		
		sum += power;

		x /= 10;
	}

	return sum == y;
}





// Question Link - gfg : https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Time Complexity = O(logn), Space Complexity = O(1)
    string armstrongNumber(int n){
        // code here
        /*int t=n;
        int x=n;
        int count=0;
        while(t!=0){
            count++;
            t/=10;
        }
        int sum=0;
        while(n!=0){
            int d=n%10;
            int power=pow(d,count);
            sum += power;
        }
        return sum==x?"Yes":"No";*/
        
        int num = n;
        int sum=0;
        while(num>0){
            int rem = num%10;
            sum +=pow(rem,3);
            num/=10;
        }
        if(sum==n)
            return "Yes";
        else 
            return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends



// Link - Leetcode : https://leetcode.com/problems/armstrong-number/           
