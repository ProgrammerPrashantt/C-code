#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter number of which notes you wanna count"<<endl;
cin>>n;

switch(n){

   case 100: cout<<"100 notes are " << 1330/100<<endl;
   break;
   case 20: cout<<"20 notes are " << 1330/20<<endl;
   break;
   case 50 : cout<<"50 notes are " << 1330/50<<endl;
   break;
   case 1: cout<<"1 notes are " << 1330/1<<endl;
   break;
   default: cout<<"100 notes are " << 1330/100<<" "<<"20 notes are " << 30/20<<" "<<" 50 notes are " << 10/50<<" "<<" 1 coins are " << 10/1<<endl;
   
}


return 0;
}