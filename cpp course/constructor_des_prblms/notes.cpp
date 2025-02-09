A copy constructor is a member function that initializes an object using another object of the same class. The Copy constructor is called mainly when a new object is created from an existing object, as a copy of the existing object. 

In C++, a Copy Constructor may be called for the following cases: 

1) When an object of the class is returned by value. 
2) When an object of the class is passed (to a function) by value as an argument. 
3) When an object is constructed based on another object of the same class. 
4) When the compiler generates a temporary object. 

//Constructors and destructors both can be made private
Yes, constructors can be made private in C++ classes. When a constructor is made private, it means that objects cannot be created using the constructor from outside the class. 

--There can be only one destructor in a class.
--Objects are always destroyed in reverse order of their creation. The reason for reverse order is, an object created later may use the previously created object.
--Yes, in C++, destructors can be made virtual