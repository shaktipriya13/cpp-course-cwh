
// Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class.
#include <iostream>
using namespace std;

class Average {
public:
    static void calculateAverage(double num1, double num2, double num3) {
        double average = (num1 + num2 + num3) / 3.0;
        cout << "The average is: " << average << endl;
    }
};

int main() {
    double num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Calling the static function directly without creating an object
    Average::calculateAverage(num1, num2, num3); //return type of fxn has not to be written

    return 0;
}
// note:
// In C++, when you declare a member function as static within a class, it means that the function belongs to the class itself rather than to any specific object instance of that class.

// The static keyword in this scenario allows the function calculateAverage to be accessed using the scope resolution operator :: directly with the class name (Average::calculateAverage(...)) in the main() function without needing to instantiate an object of the Average class.
