#include<iostream>
using namespace std;
struct employee
{
    int eId;
    char favchar;
    float salary;
};

union money 
{
    int rice;
    char car;
    float pounds;
};
int main(){

enum meal{breakfast, lunch, dinner};
meal m1 = lunch;
cout<<(m1==1);

// cout<<breakfast;
// cout<<lunch;
// cout<<dinner;



    // struct employee harry;
    // union money m1;
    // m1.rice=34;
    // m1.car ='c';
    // cout<<m1.car;

// struct employee harry;
// struct employee shubham;
// struct employee rohandas;
//  harry.eId =1;
//  harry.favchar='c';
//  harry.salary = 120000;

//  cout<<"the valiue is "<<harry.eId<<endl;
//  cout<<"the valiue is "<<harry.favchar<<endl;
//  cout<<"the valiue is "<<harry.salary<<endl;





return 0;
}