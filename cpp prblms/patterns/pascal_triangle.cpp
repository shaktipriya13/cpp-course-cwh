#include <iostream>
using namespace std;

// Function to calculate and print Pascal's Triangle
void printPascalTriangle(int numRows) {
    int coefficient = 1;

    for (int i = 0; i < numRows; i++) {
        for (int space = 1; space <= numRows - i; space++) {
            cout << "  "; // Print spaces for formatting
        }


        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coefficient = 1;
            else
                coefficient = coefficient * (i - j + 1) / j;

            cout << coefficient << "   ";
        }
        cout << endl;
    }
}

int main() {
    int rows;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    printPascalTriangle(rows);

    return 0;
}
