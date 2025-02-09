#include <iostream>
using namespace std;

class Point {
	Point() { cout << "Constructor called"; }
};

int main()
{
	Point t1;
	return 0;
}
// o/p is compile error since constructor here is private