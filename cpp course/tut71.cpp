#include<iostream>
#include<vector>
using namespace std;
template <class t>
//creating a display fxn that displays the elements of a vector
void display(vector<t> &v){ //passing vector as a datatype like int ,float etc
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
        cout<<v.at(i)<<' ';
    }
    cout<<endl;
}
int main(){
    vector<float>vec1; //an array can't be resized
    //Ways to create a vector
    
    vector<int> v1; //zero length integer vector
    vector<char> vec2(4); //4-element character vector
    vector <char> vec3(vec2); //4-element charcter vector from vec2
    vector<int> v(6,3); //3 will be inserted 6 times in v
    display(v);

    int n;
    cout<<"Enter size of vector: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        float ele;
        cout<<"Enter an element to add to this vector: "<<endl;
        cin>>ele;
        vec1.push_back(ele);
        //push_back and pop_back are used for resizing the vector
    }
    // vec1.pop_back();
    display(vec1);
    //iterator is just like a pointer that will point to any element in the vector
    //insert method inserts elements before the element at the specified position
    vector<float>::iterator iter = vec1.begin();
    vec1.insert(iter,566); //this will insert 566 before the 1st element



    //vec1.insert(iter+1,78); //this will insert 78 before the 2nd element


    //note:
    // vec1.insert(iter+1,88);
    /*
    after the first insertion (vec1.insert(iter+1,566)), iter+1 becomes invalidated because the insertion operation may resize the vector, potentially reallocating memory, and thus invalidating iterators.

To fix this issue, you need to reassign iter after each insertion operation to ensure it points to a valid location in the vector.
    */
   // Reassigning the iterator after the first insertion
    iter = vec1.begin() + 1;
   
    vec1.insert(iter,50,4090); //5 argument specifies that 5 copies of 5 will get inserted 
   display(vec1);
    


    return 0;
}