#include<iostream>
using namespace std;

int main(){

//****break statements */
// it terminate the loop 

for(int i=0; i<=20; i++){
    if(i==5)
    break;      
    cout<<i<<endl;
    cout<<endl;
}
//*********continue statements */
// it terminate current iteration and move to next one
for(int i=0; i<=20; i++){
    if(i==5)
    continue;
    cout<<i<<endl;
}

return 0;
}