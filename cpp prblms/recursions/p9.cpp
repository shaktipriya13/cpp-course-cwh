// Write a C++ program to implement a recursive function to count the number of occurrences of a specific element in an array of integers
#include<iostream>
using namespace std;

int count(int n, int arr[], int start, int end) {
    if (start > end) {
        // condition implies if the user enters the value of start greater than the end...count(4,arr,9,0)
        return 0; // Base case: If start exceeds end, return 0
    }

    int mid = (start + end) / 2;
    int c1 = count(n, arr, start, mid); // Count in left half
    int c2 = count(n, arr, mid + 1, end); // Count in right half

    if (arr[mid] == n) {
        return 1 + c1 + c2; // If the element is found at mid, add 1 to count
    } else {
        return c1 + c2; // Otherwise, return the sum of counts in both halves
    }
}

int main() {
    int arr[] = {3, 4, 4, 8, 9, 6, 6, 4, 1, 2};
    int c = count(4, arr, 0,9);
    cout << c << endl;
    return 0;
}
