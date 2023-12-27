/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Recursion 

#include<iostream>
using namespace std;

int factorial(int n){
//base case
if(n==1){
    return 1;
}

  int ans = n*factorial(n-1);
return ans;

}

int main(){
    
int n;

cout<<"Enter the value of n"<<endl;
cin>>n;

int answer = factorial(n);
cout<<"answer is "<<answer;

    return 0;
}