#include<iostream>

using namespace std;
int main(){
//cout<<"this is tutorial 9 "<<endl;
int age;
/*
cout<<"tell me your age "<<endl;
cin>>age;

if((age<18) && (age>0)){
    cout<<"you cannot come to my party"<<endl;
}
else if(age == 18){
    cout<<"you are eligible to come to party"<<endl;
}
else if (age<1){
    cout<<"you are not yet born"<<endl;
}
else { 
    cout<<"you can come to party and have more fun "<<endl;
}*/
cout<<"tell me your age "<<endl;
cin>>age;
switch (age)
{
case (18):
    cout<<"killer boy "<<endl;
    break;

    case ( 15):
    cout<<"you are a kid "<<endl;
    break;

    case (32):
    cout<<"you are an adult "<<endl;
    break;

default:
    cout<<"you are an alien "<<endl;
    break;
}
cout<<"done with switch case "<<endl;
    return 0;
}