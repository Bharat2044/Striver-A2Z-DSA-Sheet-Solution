// Link - gfg : https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1

class Solution {
  public:
    string armstrongNumber(int n){
        int temp = n;
        int x = n;
        int count = 0;
        int sum = 0;
        
        // count number of digits
        while(temp != 0) {
            count++;
            temp /= 10;
        }
        
        // sum of all digits with power
        while(x != 0) {
            int d = x%10;
            sum += pow(d, count);
            x /= 10;
        }
        
        if(n == sum)
            return "Yes";
        else
            return "No";
    }
};
// Time Complexity = O(n)
// Space Complexity = O(1)



// Link - Leetcode : https://leetcode.com/problems/armstrong-number/           
