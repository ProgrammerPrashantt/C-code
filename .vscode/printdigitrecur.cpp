#include<iostream>
using namespace std;

void print_Digit(int n){
    //base case
    if(n==0){
        return;
    }

 // 1 case solve kardo
 int digit = n%10;

 
  print_Digit(n/10);
cout<<digit<<" ";


}

int main(){
   
int n = 647;

print_Digit(n);


    return 0;
}