//#include<iostream>
//using namespace std;
//**********inline functions**********//
//Inline function is a function in which the compiler is requested to replace the function call with the actual function code, reducing function-call overhead.
// inline int product(int a,int b){
//     return a*b;
// }
// int main(){
//  int a,b;
//  cout<<"enter the value of a and b :"<<endl;
//  cin>>a>>b;
//  cout<<"the product of a and b is :"<<product(a,b)<<endl;
//cout<<product( 5,6);


//return 0;


//********constant variable***********//
//it means value once set cant change later or accidently

///int main (){
    // const int age = 25;
    // age=40;
    // cout<<age;// this will give error because you already fixed the value of age
// const int age =45;//this will work
 //cout<<age;


    //return 0;
//}


// #include<iostream>
// using namespace std;
// void func(){
//     static int x=0;
//     x++;
//     cout<<x<<endl;
// }

// int main(){
//     func();
//     func();
//     func();
//     func();   //Apni value ko function calls ke beech remember karta hai.


// return 0;
// }


//////********default arguments*******////
//syntax 
//returnType functionName(parameter = defaultValue)
#include<iostream>
using namespace std;
int sum (int a=60, int b=10){
    int c= a+b;
    return c;
}
int main(){
    cout<<sum(20)<<endl;// value of b used from default arguments
    cout<<sum(20,30)<<endl;// both values of a and b is given so default values are not used

    cout<<sum();// here value of a and b is not given and hence both default values are used 

//Default argument ke baad wale parameters ko bhi default argument dena padta hai.

return 0;
}
// //| Concept          | Main kaam                                                       |
// | ---------------- | --------------------------------------------------------------- |
// | `inline`         | Small function ka code call ki jagah insert karne ka suggestion |
// | `const`          | Variable ki value ko change hone se rokna                       |
// | `static`         | Variable ki value ko function calls ke beech preserve karna     |
// | Default argument | Argument na dene par predefined value use karna                 |
