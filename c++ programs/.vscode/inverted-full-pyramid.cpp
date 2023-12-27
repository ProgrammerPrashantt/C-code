#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
//for rows
 for (int row = 0;row<n;row++){
    //for spaces
    for(int col=0; col<row; col++){
        cout<<" ";
    }
//for stars
    for(int col = 0; col<n-row; col++){
        cout<<" *";
    }
    cout<<endl;
 }

    return 0;
}