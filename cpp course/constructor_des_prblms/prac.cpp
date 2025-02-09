#include<iostream>
using namespace std;
class c1{
	public:
		c1(int a):y(a){}
		void show(){
			cout<<y;
		}
	private:
		int y;
};
int main(){
	c1 obj(170);
	obj.show();
	
	return 0;
}