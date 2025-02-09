// 41: Write a Program to Add two Fractions
#include<iostream>
using namespace std;

// Function to find the greatest common divisor (GCD)
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

// Function to add two fractions
void frac() {
    int n1, n2, d1, d2, n3, d3;
    cout << "Enter numerators for 2 fractions: " << endl;
    cin >> n1 >> n2;
    cout << "Enter denominators for 2 fractions: " << endl;
    cin >> d1 >> d2;

    // Calculate the common denominator
    d3 = d1 * d2;

    // Calculate the numerator of the result
    n3 = (n1 * d2) + (n2 * d1);

    // Find the GCD of numerator and denominator to simplify the fraction
    int gcd = findGCD(n3, d3);
// gcd is the greates no. that will divide both :gcd(4,8)=4
    // Simplify the fraction
    n3 /= gcd;
    d3 /= gcd;

    cout << n1 << "/" << d1 << " + " << n2 << "/" << d2 << " = " << n3 << "/" << d3 << endl;
}

int main() {
    frac();
    return 0;
}
