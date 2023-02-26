// Link : https://practice.geeksforgeeks.org/problems/while-loop-printtable/1

class Solution{
    public:
        void printTable(int n)
        {
            for(int i=10; i>=1; i--)
                cout << n*i <<" ";
            cout<<endl;
        }  
};

// Time Complexity = O(1)
// Space Complexity = O(1)