#include<iostream>
using namespace std;

int primeornot(int n){

    for(int i = 2; i<n-1; i++){
        if(n%i==0){
            return 0;
        }else{
            return 1;
        }
    }
}



int main(){
    
int n;
cin>>n;

if(primeornot(n)==true){
    cout<<"prime";
}else{
    cout<<"not-Prime";
}


    return 0;
}