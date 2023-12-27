#include<iostream>
using namespace std;

int fib(int n){
int n1 = 0, n2 = 1, n3, number;


cin>>number;
cout <<n1<<" "<<n2<<" ";//Printing 0 and 1';

for(int i = 2; i<number;i++){

n3 = n1+n2;
cout<<n3<<" ";

n1 = n2;
n2 = n3;

}
return number;
}
int main(){
    int n;
    fib(n);

    return 0;
}