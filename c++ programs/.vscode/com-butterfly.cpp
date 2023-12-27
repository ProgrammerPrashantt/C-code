#include<iostream>
using namespace std;

int main(){
    
int n;
cin>>n;

for(int row = 0; row<2*n;row++){

int condition = row<n ?row:n+(n-row-1);
int space_count = row < n ? 2*(n-condition-1) : row - condition -1;

for(int col = 0; col<2*n;col++){
    if(col<=condition){
        cout<<"*";
    }else if(space_count > 0){
        cout<<" ";
        space_count --;    }
        else{
            cout<<"*";
        }
}

cout<<endl;
}

    return 0;
}   