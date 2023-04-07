// Question Link: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/



#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n), Space Complexity: O(n)
void rvereseArray(int arr[], int start, int end) {
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}

/* Utility function to print an array */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};

    // To print original array
    printArray(arr, 6);

    // Function calling
    rvereseArray(arr, 0, 5);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr, 6);

    return 0;
}
