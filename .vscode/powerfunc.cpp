#include<iostream>
#include<math.h>
using namespace std;

int power(){
    int a, b;
    cin>>a>>b;
    int ans = 1;
    for(int i=1; i<=b; i++ ){
        ans = ans * a;
        
    }
    return ans;
}


int main(){
    
int ans = power();

cout<<"Answer is "<< ans;

int an = power();

cout<<"Answer is "<< an;

int a = power();

cout<<"Answer is "<< a;

    return 0;
}