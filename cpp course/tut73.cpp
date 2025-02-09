//note: It is important to clarify that whatever I have taught and whatever I will be teaching in the coming tutorials about STL isn’t everything. 


//search for map methods in cpp reference maps website
//maps are used to store the key-value pairs
map<key,value>
map[key]=value;
//Map is an associative array-->means is an abstract data type that stores a collection of key-value pairs, where each key must be unique within the collection.


// For example: a teacher wants to store the marks of students which in future can be accessed by their names. 

// most imp. container classes-> map, list, vector

#include<iostream>
#include<map> //imp to write when using map
#include<string> //for if using string methods

using namespace std;

int main(){
    map<string,int> marksMap;
    marksMap["Harry"]=98;
    marksMap["shruti"]=100;
    marksMap["alia"]=87;

    //iterating and printing:
        //begin() -> returns an iterator to the beginning
        //end() -> returns an iterator to the end

//.(dot) is membership operator
//inserting new key-value pairs in map
    marksMap.insert({{"kavi",98},{"Luna",68}});
    map<string,int> :: iterator itr;
    for(itr=marksMap.begin();itr!=marksMap.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
        //first will give key and second will give value -> they are used to access members
    }
    for(auto iter:marksMap){ //here no dereferncing is required
        cout<<iter.first;
    }
    
    cout<<"The size of map here is: "<<marksMap.size()<<endl;
    cout<<"The maxsize of map here is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value of map here is: "<<marksMap.empty()<<endl; //Returns true if the map is empty
    //0 means false
    
    return 0;
}