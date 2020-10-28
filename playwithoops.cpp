#include <iostream>
using namespace std;

// base class
class A
{ 
// protected data members
public :
int get(){
    return 5;
}
};
class B
{ 
// protected data members
public :
int get(){
    return 10;
}
};
class C: public A,public B
{ 
// protected data members
//public :
//int get(){
  //  return 10;
//}
};

// sub class or derived class


// main function
int main() {
C c;
int a=c.get();
cout<<a<<endl;
return 0;
}