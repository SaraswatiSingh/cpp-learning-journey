#include<iostream>
using namespace std;
//Array ia a collection of items of similar types stored in a contiguous memory location
 
int main(){
 //array example
 //int marks[] ={45,85,69,36};
//   int mathsmarks[4];
//  mathsmarks[0]=228;
//   mathsmarks[1]=28;
//   mathsmarks[2]=278;
//   mathsmarks[3]=8;
 

//  cout<<"these are maths marks "<<endl;
//  cout<<mathsmarks[0]<<endl;
//  cout<<mathsmarks[1]<<endl;
//  cout<<mathsmarks[2]<<endl;
//  cout<<mathsmarks[3]<<endl;


 // you can change the value of an array

//  marks[2] = 455;
//   cout<<marks[0]<<endl;
//   cout<<marks[1]<<endl;
//    cout<<marks[2]<<endl;
//   cout<<marks[3]<<endl;


// for (int i=0; i<4; i++){
//     cout<<"The value of marks "<< i << " is "<<marks[i]<<endl;
// }

// quick quiz : do the same using while and do-while loops

// int marks[] ={45,85,69,36};
// int i=0;
// while(i<4)
//  {
//      cout<<marks[i]<<endl;
//      i++;
//  }

//do while loop
// int marks[] ={45,85,69,36};
// int i=0;
//  do
// {
// cout<<marks[i]<<endl;
// i++;
// }

// while(i<4);


 
// return 0;
// }


// pointer arithmatic
//address new== address current +i*size of (datatype)

// pointers and arrays
int marks[] ={45,85,69,36};

for (int i=0; i<4; i++){
    cout<<"The value of marks "<< i << " is "<<marks[i]<<endl;
}
int* p = marks;
cout<<"the value of marks[0] is"<<*p;
cout<<"the value of marks[1] is"<<*(p+1);
cout<<"the value of marks[2] is"<<*(p+2);
cout<<"the value of marks[3] is"<<*(p+3);
return 0;
 }