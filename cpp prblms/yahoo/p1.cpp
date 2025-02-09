// Given an even number N (greater than 2), return two prime numbers whose sum will be equal to given number. There are several combinations possible. Print only the pair whose minimum value is the smallest among all the minimum values of pairs and print the minimum element first.

#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

bool isPrime(int p) {
    if (p <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(p); i++) {
        if (p % i == 0) {
            return false;
        }
    }
    return true;
}

void findPrimePairs(int n) {
    if (n % 2 != 0 || n <= 2) {
        cout << "Invalid input! Please enter an even number greater than 2." << endl;
        return;
    }

    int first = 0, second = 0;
    int minPrimeSum = INT32_MAX;

    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            int currentMin = min(i, n - i);
            if (currentMin < minPrimeSum) {
                minPrimeSum = currentMin;
                first = i;
                second = n - i;
            }
        }
    }
    int min=(first>second)?second:first;
    cout << "Required minimum prime pair is: " << first << " and " << second << endl;
    cout<<"min prime no. required:"<<min;
}

int main() {
    int n;
    cout << "Enter any even number greater than 2: ";
    cin >> n;
    findPrimePairs(n);
    return 0;
}
