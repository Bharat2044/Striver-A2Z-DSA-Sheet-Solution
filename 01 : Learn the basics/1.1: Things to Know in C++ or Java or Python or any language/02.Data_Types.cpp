// Question Link: https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int dataTypes(string type) {
	// Write your code here

	if(type == "Integer")
		return 4;
	else if(type == "Long")
		return 8;
	else if(type == "Float")
		return 4;
	else if(type == "Double")
		return 8;
	else if(type == "Character")
		return 1;
}






// Question Link : https://practice.geeksforgeeks.org/problems/data-type-1666706751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=data-type

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Time Complexity = O(1), Space Complexity = O(1)
    int dataTypeSize(string str) {
        // your code here
        if(str == "Character") 
            return sizeof(char);
            
        else if (str == "Integer") 
            return sizeof(int);
            
        else if (str == "Long") 
            return sizeof(long);
            
        else if (str == "Float") 
            return sizeof(float);
            
        else if (str == "Double") 
            return sizeof(double);
            
        else 
            return 0;   
    }
};


int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends