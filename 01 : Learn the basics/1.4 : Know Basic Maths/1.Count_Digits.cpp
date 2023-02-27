// Link : https://practice.geeksforgeeks.org/problems/count-digits5716/1

class Solution{
public:
    int evenlyDivides(int n){
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

// Time Complexity = O(logn)
// Space Complexity = O(1)