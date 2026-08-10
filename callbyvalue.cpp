#include<iostream>
using namespace std;

void change(int x){
    x=30;
}

int main(){
    int a= 20;
    change(a);
    cout<<a;

return 0;
}

// here original value is not changed as we pass the copy of the a to x 