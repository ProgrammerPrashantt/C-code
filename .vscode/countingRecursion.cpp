#include<iostream>
using namespace std;

void printcount(int n){

    //Base case
    if(n==0){
        return;
    
    }

//recursive relation
printcount(n-1);

//processing 
cout<<" "<<n;




}

int main(){
    
 int n = 5;

   printcount(n);
 //cout<<"Answer is "<<answer<<endl;


    return 0;
}