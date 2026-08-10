#include<iostream>
using namespace std;
int main(){

   // cout<<"This is tutorial 9 :"<<endl;

   int age;
   cout<<"Tell me your age :"<<endl;
   cin>>age;

   //*******selection control structutres: if else-if else ladder*************


//  if ((age<18)&& (age>0)){
//     cout<<"you can not come to my party  "<<endl;
// }
// else if (age==18){
//     cout<<"you are a kid and you will get a kid pass to the party  "<<endl;
// }
// else if (age==0){
//     cout<<"you are not yet born "<<endl;
// }

// else {
//     cout<<"you can come to my party  "<<endl;
// }
 

//*******Selection control structutres: Switch case statements*************

switch (age)
{
case 18 :
    cout<<"You are 18"<<endl;
    break;
    case 22:
    cout<<"you are 22"<<endl;
   break;

default:
cout<<"No special cases"<<endl;
    break;
}
  return 0;
   
}