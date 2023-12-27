#include<iostream>
using namespace std;

int sum( int a, int b){
    int c = a + b;
    return c;
}
// this will not swap
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
// swap pointer
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// call by reference using c++ reference variables
int & swapreferencevar(int &a, int &b){               //pointers hatana padega c++ refernce variable ke liye
    int temp = a;
    a = b;
    b = temp;
    return a;
}


int main(){
int x =4 , y = 5;
  // cout<<"the sum of 4 and 5 is "<<sum(a , b); 
//cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
//swap(a, b);
//cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;

//swapPointer(&x, &y); // this will swap a and b using pointer reference
cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
swapreferencevar(x , y) = 766;

cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;




    return 0;
}