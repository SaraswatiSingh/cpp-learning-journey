#include<iostream>
using namespace std;
//function prototype
// type function-name (arguments);
int sum(int a,int b); //-->Acceptable
//int sum(int a,b ); //-->Not acceptable
//int sum(int ,int );//--> Acceptable
void g(void);
// void g(); //-->also acceptable

int main(){

int num1,num2;
cout<<"enter first number :"<<endl;
cin>>num1;
cout<<"enter second number :"<<endl;
cin>>num2;
 cout<<"the sum is "<<sum(num1,num2)<<endl;;

// num1,num2 are actual parameters
g();

return 0;
}
int sum (int a,int b){
    // a and b will be taking values from actual parameters num1 and num2 and hence called actual parameters
int c= a+b;
return c;
}


void g(){
    cout<<"hello good morning";
}


// sometimes actual parameter and formal parameter are same means we can use same notation for formal and actual parameters
