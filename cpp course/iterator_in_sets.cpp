#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> mySet = {1, 2, 3, 4, 5};

    // Use an iterator to iterate through the set
    for (set<int>::iterator it = mySet.begin(); it != mySet.end(); it++) {
        cout << *it << " ";
    }

    cout << std::endl;
    return 0;
}
