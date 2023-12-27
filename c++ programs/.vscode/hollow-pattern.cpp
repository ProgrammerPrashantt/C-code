#include<iostream>
using namespace std;

int main(){
    
int n ;
cin>>n;
int m;
cin>>m;

for(int row = 0; row < n; row++){
    if(row == 0 || row == n-1){
    for(int col = 0; col<m; col++){
        
        cout<<" * ";
    }

    } else {
        cout<<" * ";
        for(int col = 1; col<m-1; col++){
            cout<<"   ";
  
        }
            cout<<" * ";
    }
  cout<<endl;

    }
    
    

    return 0;
}   