#include<iostream>
using namespace std;
void change(int &x){
x=100;
}

int main(){

    int a=20;
    change(a);
    cout<<a;

return 0;
}
// here original value changed because we pass the address of original variable to the function