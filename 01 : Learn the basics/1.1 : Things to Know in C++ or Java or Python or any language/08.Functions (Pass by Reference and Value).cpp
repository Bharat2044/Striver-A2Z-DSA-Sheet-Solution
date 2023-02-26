// Link : https://practice.geeksforgeeks.org/problems/pass-by-reference-and-value/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pass-by-reference-and-value

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        
        /*vector<int> ans;
        
         ans.push_back(a + 1);
         ans.push_back(b + 2);
         
         return ans;*/
         
         return {a+1, b+2};
    }
};

// Time Complexity = O(1)
// Space Complexity = O(1)