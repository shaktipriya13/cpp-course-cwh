//list is another type of container
//it is actually a bidirectional linear list which shows the efficient operations of insertion and deletion

//insertion and deletion of elements in array is not an easy task....bcoz after each deletion or insertion ,remaining all elements are needed to be shifted again

//difference b/w arays and linked lists is that traversal of elements in array is faster than in linked lists where we hv to travel through pointers as the memory locations are not contiguous
//deletion ,insertion is faster in ll than arrays

//ll can also be bidirectional
#include<iostream>
#include<list>
using namespace std;
template<class t>
void display(list<t> &l){
    l<t>::iterator iter;
    iter=l.begin();
    for(int i=0;i<l.size();i++){
        cout<<*iter<<endl;
        iter++;
    }
}

int main(){
    list<int> l1; //empty list of zero length
    list<int> l2(7);//empty list of size 7
    l1.push_back(8);
    l1.push_back(7);
    l1.push_back(3);
    l1.push_back(2);
    list<int> ::iterator iter;

    iter=l1.begin(); //iter will point to the first element of list
    cout<<*iter<<endl; //will print the 1st element of list
    iter++;
    cout<<*iter;

    cout<<"\n calling display"<<endl;
    display(l1);
    l1.pop_back();
    l1.pop_front(); // removes first element
    l1.remove(7); //used to remove element from the middle
    return 0;
}