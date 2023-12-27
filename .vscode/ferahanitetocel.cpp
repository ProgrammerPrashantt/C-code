#include<iostream>
using namespace std;

int main(){
    
int n;
cin >> n;
int i = 2;
while (i<n){
    if(n%i==0){
  cout<<" NOT Prime Number "<<endl;
  return 0;
    }
  
    i = i+1;
}
cout <<" PRIME NUMBER"<<endl;
    return 0;
}