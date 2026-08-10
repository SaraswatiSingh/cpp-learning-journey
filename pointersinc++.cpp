#include<iostream>
using namespace std;

int main(){
//what is a pointer?--->
//pointers are the datatypes which holds the address of other data types


int a=3;
int* b;
b = &a;  // here b is containing the address of a
// &-->( Address of) operator
// *--> (value at)Derefrence operator
cout<<"the address of a is "<< &a <<endl;
cout<<"the address of a is "<< b <<endl;


// *---> (value at) Derefrence operator
cout<<"the value at address b is "<< *b <<endl;

//pointer to pointer variable
int** c =&b;
cout<<"the address of b is  "<< &b<<endl;
cout<<"the value of b is  "<< **c <<endl;
return 0;
}