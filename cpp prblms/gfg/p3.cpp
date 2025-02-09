// Function to convert a number to its binary representation
#include <iostream>
#include <string>

std::string decimalToBinary(int n) {
    std::string binary;
    if (n == 0) {
        binary = "0"; // If the number is 0, its binary representation is "0"
    } else {
        while (n > 0) {
            binary = (n % 2 == 0 ? "0" : "1") + binary; // Build the binary string bit by bit
            n /= 2; // Divide the number by 2 for the next bit
        }
    }
    return binary;
}

int main() {
    int number = 8; // Replace this with your desired number

    std::string binaryString = decimalToBinary(number);

    std::cout << "Binary representation of " << number << " is: " << binaryString << std::endl;
    
    return 0;
}
