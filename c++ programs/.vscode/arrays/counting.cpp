#include<iostream>
using namespace std;

//count 0's and 1's
int count(int arr[], int n){

int numZero = 0;
int numOne = 0;

for(int i=0; i<n; i++){
if(arr[i]==0){
    numZero ++;
}
if (arr[i]==1){
    numOne ++;
}
}

cout<<"0's are: "<< numZero<<endl;
cout<<"1's are: "<< numOne;

}


int main(){

int arr[6] = {0,1,1,1,0,1};
int n = 6;
count(arr,n);


return 0;
}