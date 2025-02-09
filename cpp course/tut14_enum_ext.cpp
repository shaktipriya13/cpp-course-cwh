#include <iostream>
using namespace std;

enum Weekday {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

void printDay(Weekday day) {
    switch (day) {
        case Monday:
        // monday internally 0 denote kr rha ha...isliye switch case me likh paya gya
        // here we could write Monday without quotes in switch case bcoz monday here is not a string but it refers to an integer value 0
            cout << "It's Monday!" <<endl<<"task15"<< endl;
            break;
        case Tuesday:
            cout << "It's Tuesday!" <<endl<<"task3"<< endl;
            break;
        case Wednesday:
            cout << "It's Wednesday!" <<endl<<"task7"<< endl;
            break;
        case Thursday:
            cout << "It's Thursday!" <<endl<<"task23"<< endl;
            break;
        case Friday:
            cout << "It's Friday!" <<endl<<"task9"<< endl;
            break;
        case Saturday:
            cout << "It's Saturday!"<<endl<<"task2" << endl;
            break;
        case Sunday:
            cout << "It's Sunday!" <<endl<<"task5"<< endl;
            break;
        default:
            cout << "Invalid day!" << endl;
            break;
    }
}

int main() {
    Weekday today = Wednesday;
    // Weekday today=3; ........this is not valid
    // weekday is a datatype that stores numbers

    cout << "Using enum in switch statement:" << endl;
    printDay(today);

    return 0;
}
// note:
// In the above example, the advantage of using an enum is primarily in enhancing code readability, maintainability, and reducing the chances of errors due to using arbitrary integer values directly in the code.

// as switch cases can't take strings as names in cases...only numbers like case 0, can be taken, reducing code readability

// without enum:
void printDay(int day) {
    switch (day) {
        case 0: // Representing Monday
            //...
        case 1: // Representing Tuesday
            //...
        // and so on...
    }
}

// While using a switch statement alone without an enum could achieve the same functionality, utilizing enums enhances code quality by providing descriptive names and context to the different cases, leading to more maintainable and readable code over time.


// Enums provide a more descriptive way to work with constants, improving code readability and making it easier to understand the intention behind the code. You can explicitly set values for enum constants if needed:
enum Colors {
    Red = 1,
    Green = 2,
    Blue = 4
};
