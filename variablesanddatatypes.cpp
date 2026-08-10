#include <iostream>
using namespace std;
int d=45;
int main(){
//**********built in data types**********/
// int a,b,c,d;

// cout<<"enter the value of a :"<<endl;
// cin>>a;
// cout<<"enter the value of b :"<<endl;
// cin>>b;
// cout<<"enter the value of c :"<<endl;
// cin>>c;
// d = a+b+c ;
// cout<<"the sum is  :"<<d<<endl;

// cout<<"the golbal variable d is :"<<::d<<endl;

//***********float double and long double Literals************* 

// float d=34.4f;
// long double f=45.5l;
// cout<<"the value of d is : "<<d<<endl<<"the value of f is : "<<f<<endl;

// cout<<"the size of 34.4 is : "<<sizeof(34.4)<<endl;
// cout<<"the size of 34.4f is : "<<sizeof(34.4f)<<endl;
// cout<<"the size of 34.4F is : "<<sizeof(34.4F)<<endl;
// cout<<"the size of 34.4l is : "<<sizeof(34.4l)<<endl;
// cout<<"the size of 34.4L is : "<<sizeof(34.4L)<<endl;

  
//*********Refrence variables**********

//saraswati-->sara-->shaurvi-->swara--->becoming
int x=44;
int  & y=x;
cout<<x<<endl<<y<<endl;



//*******Typecasting******

//to convert one datatype into another datatype

int l=45;
float m=23.1;

cout<<"the value of l: "<<float(l)<<endl;
cout<<"the value of m: "<<int(m)<<endl;
int n = int(m);
cout<<n;

cout<<"the expression is "<<l+m<<endl;
cout<<"the expression is "<<l+int(m)<<endl;
cout<<"the expression is "<<l+(int)m<<endl;


    return 0;
}