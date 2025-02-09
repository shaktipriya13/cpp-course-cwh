//friend classes tut27
#include <iostream>
#include <cmath>
using namespace std;
class point
{
    int x, y;

public:
    void displayPoint()
    {
        cout << "The point is: "
             << "(" << x << "," << y << ")" << endl;
    }
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    friend void distance(point,point);
};
void distance(point p1,point p2){
    int s1=pow((p1.x-p2.x),2);
    int s2=pow((p1.y-p2.y),2);
    float d=sqrt(s1+s2);
    cout<<"distance between two points is: "<<d<<endl;
}

int main()
{
    point p1(1,6);
    point p2(1,6);
    p1.displayPoint();
    p2.displayPoint();
    distance(p1,p2);
    return 0;
}