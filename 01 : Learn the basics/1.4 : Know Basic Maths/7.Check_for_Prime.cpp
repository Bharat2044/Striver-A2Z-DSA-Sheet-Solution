// Question Link: https://www.codingninjas.com/studio/problems/check-prime_624934?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
bool isPrime(int n) {
	// Write your code here.
	if(n <= 1)
		return false;

	for(int i=2; i*i<=n; i++) {
		if(n%i == 0)
			return false;
	}

	return true;
}



// Question Link - gfg : https://practice.geeksforgeeks.org/problems/prime-number2314/1
class Solution{
public:
    // Approach - 1 :  Time Complexity = O(n), Space Complexity = O(1)
    /*int isPrime(int n) {
        if(n <= 1)
            return 0;
            
        for(int i=2; i<n; i++) {
            if(n%i == 0)
                return 0;
        }
        
        return 1;
    }*/
    
    // Approach - 2 :  Time Complexity = O(sqrt(n)), Space Complexity = O(1)
    /*int isPrime(int n) {
        if(n <= 1)
            return 0;
            
        for(int i=2; i*i<=n; i++) {
            if(n%i == 0)
                return 0;
        }
        
        return 1;
    }*/
    
     // Approach - 3 :  Time Complexity = O(sqrt(n)), Space Complexity = O(1)
    int isPrime(int n) {
        if(n <= 1)
            return 0;
    
        if(n == 2 || n == 3)
            return 1;
    
        if(n%2 == 0 || n%3 == 0)
            return 0;
    
        for(int i=5; i*i<=n; i+=6){
            if(n%i==0 || n%(i+2)==0)
                return 0;
        }
        return 1;
    }
};