#include<iostream>
using namespace std;

int main(){
    
        int a=3;
        int* b = &a;
        cout<<"the address of a is "<<&a<<endl;
        cout<<"the address of a is "<<b<<endl;

        //dereference opertaor
        cout<<"the value of a is "<<*b<<endl;


int** c = &b;
cout<<"the address of b is "<<&b<<endl;
cout<<"the address of b is "<<c<<endl;
cout<<"the value at address c is "<<*c<<endl;
cout<<"the value at address value at value at_c is "<<**c<<endl;



    return 0;
}