#include<iostream>
using namespace std;
//Numeric hollow pyramid 
int main(){
    
  int n;
  cin>>n;

  for(int row = 0; row<n; row++){

for(int col = 1; col<row+2; col++){
    if(col == 1 || col == row+1 || row == n - 1){
    cout<<col;}
    else{
        cout<<" ";
    }
}


cout<<endl;
  }

    return 0;
}   