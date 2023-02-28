// Link : https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1

class Solution {
  public:
    vector<long long> lcmAndGcd(long long a , long long b) {
        // Approach - 1  ==> Using predefined method    =>  Time Complexity = O(log(min(a, b))), Space Complexity = O(1)
        /*vector<long long> v;
        long long x= __gcd(a,b);
        long long y= (a*b)/x;
        v.push_back(y);
        v.push_back(x);
        return v;*/
        
        // Approach - 2  ==> Using Naive Solution    =>  Time Complexity = O(min(a, b)), Space Complexity = O(1)
        /*vector<long long> v;
        long long x = 1;
        for(int i=min(a,b); i>=1; i--) {
            if(a%i==0 && b%i==0) {
                x = i;
                break;
            }
        }
        long long y= (a*b)/x;
        v.push_back(y);
        v.push_back(x);
        return v;*/
        
        // Approach - 3  ==> Using Euclidean’s Algorithm    =>  Time Complexity = O(min(a, b)), Space Complexity = O(1)
        /*vector<long long> v;
        long long m = a;
        long long n = b;
        while(m != n) {
            if(m > n)
                m = m-n;
            else
                n = n-m;
        }
        long long x = m;
        long long y = (a*b)/x;
        v.push_back(y);
        v.push_back(x);
        return v;*/
        
        // Approach - 4  ==> Using Optimized Euclidean’s Algorithm    =>  Time Complexity = O(log(min(a, b))), Space Complexity = O(1)
        vector<long long> v;
        long long m = a;
        long long n = b;
        while(n != 0) {
            int rem = m%n;
            m = n;
            n = rem;
        }
        long long x = m;
        long long y = (a*b)/x;
        v.push_back(y);
        v.push_back(x);
        return v;
    }