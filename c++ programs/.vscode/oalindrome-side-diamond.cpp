#include<iostream>
using namespace std;

int main(){
    
int n;
cin>>n;
int cond;
for(int row =0; row<n; row++){
    if( cond = row<=n/2){ cond = 2*row; }
    else{ cond = 2*(n-row-1);}


    for(int col = 0; col<=cond;col++){

        if(col<=cond/2){
            cout<<col+1;
        }else{
            cout<<cond-col+1;
        }
    }



    cout<<endl;
}

    return 0;
}