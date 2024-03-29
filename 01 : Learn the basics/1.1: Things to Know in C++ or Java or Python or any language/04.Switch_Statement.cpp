// Question Link: https://www.codingninjas.com/studio/problems/switch-case-statement_8357244?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here

	switch(ch) {
		case 1:
			return M_PI*a[0]*a[0];
			break;
		case 2:
			return a[0]*a[1];
	}

	return 0;
}






// Question Link : https://practice.geeksforgeeks.org/problems/java-switch-case-statement3529/1

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());

        while(t-- > 0){
            int choice = Integer.parseInt(in.readLine());
            String a[] = in.readLine().trim().split("\\s+");
            List<Double> arr = new ArrayList<Double>();
            for(int i = 0;i < choice;i++)
                arr.add(Double.parseDouble(a[i]));
            
            Solution ob = new Solution();
            if(choice == 1)
                System.out.println(ob.switchCase(choice, arr));
            else
                System.out.println((int)ob.switchCase(choice, arr));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution{

    // Time Complexity: O(1), Space Complexity: O(1)
    static double switchCase(int choice, List<Double> arr){
        // code here
        switch(choice){
            case 1:
                return Math.PI * arr.get(0) * arr.get(0);
            case 2:
                return arr.get(0) * arr.get(1);
        }
        return 0;
    }
}