#include<iostream>
using namespace std;
 int main (){

int a,b;
cin>>a>>b;

bool isPrime(int num) {
    for( int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}


for(int i=a;i<=b;i++){
    if(isPrime(i)){
        cout<<i<<endl;
    }
}

    return 0;
}