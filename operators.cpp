//there are two types of header files:
//1.system header files: it comes with the compiler

#include<iostream>

//2.user defined header files: it is written by the programmer
//#include "this.h" //--> this will give an error if this.h is not present in the current directory
using namespace std;
int main(){
    int a=4,b=5;

    cout<<"operators in c++"<<endl;
      cout<<"following are the types of operators in c++"<<endl;
      //Arithmatic operators
      cout<<"the value of a + b is: "<<a+b<<endl;
      cout<<"the value of a - b is: "<<a-b<<endl;
      cout<<"the value of a * b is: "<<a*b<<endl;
      cout<<"the value of a / b is: "<<a/b<<endl;
      cout<<"the value of a % b is: "<<a%b<<endl;
      cout<<"the value of a++ is: "<<a++<<endl;
      cout<<"the value of a-- is: "<<a--<<endl;
      cout<<"the value of ++a is: "<<++a<<endl;
      cout<<"the value of --a b is: "<<--a<<endl;
      cout<<endl;

      //Assignment operators --> it use to assign values to variables
      // int a=3, b=9;
      // char d='d';

      //comparison operators
      cout<<"following are the comparison operators in c++"<<endl;
      cout<<"The value of a == b  is "<<(a==b)<<endl;
       cout<<"The value of a != b  is "<<(a!=b)<<endl;
        cout<<"The value of a > b  is "<<(a>b)<<endl;
         cout<<"The value of a < b  is "<<(a<b)<<endl;
          cout<<"The value of a <= b  is "<<(a<=b)<<endl;
           cout<<"The value of a >= b  is "<<(a>=b)<<endl;
           cout<<endl;

           // logical operators
           cout<<"following are the logical operators in c++"<<endl;
           cout<<"the value of this logical and operator is  ((a==b) && (a<b)) : " <<((a==b) && (a<b))<<endl;
           cout<<"the value of this logical or operator is  ((a==b) || (a<b)) : " <<((a==b) || (a<b))<<endl;
           cout<<"the value of this logical not operator   (!(a==b) is : " <<(!(a==b) )<<endl;
           

    return 0;
}
