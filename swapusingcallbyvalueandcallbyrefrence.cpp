#include<iostream>
using namespace std;
// void swapnumbers(int a,int b){
//     int temp = a;
//     a=b;
//     b=temp;
// }

// int main(){
// int x= 20;
// int y = 30;
//  swapnumbers(x,y);
//  cout<<x<<endl;
//  cout<<y<<endl;
// return 0;
// }


// here value did not swap because we just copy the value of x and y to a and b because functions get copies 


// call by refrence se swap 
 void swapnumbers(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
 }

 int main(){
    int x=20;
    int y=30;
    swapnumbers(x, y);
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
 }
 // here values are changed because we give original adress of x and y to the function  and whatever happens in a function happens in the original value 


 //Call by Value: A copy of the actual argument is passed to the function, so changes made inside the function do not affect the original variable.

//Call by Reference: A reference to the actual argument is passed to the function, so changes made inside the function can affect the original variable.