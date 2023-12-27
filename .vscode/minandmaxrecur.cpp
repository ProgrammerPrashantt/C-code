#include<iostream>
#include<limits.h>

using namespace std;

void findMAx(int arr[],int n,int i,int& maxi){
//base case
 if(i>=n){
    return ;
 }

if(arr[i]>maxi){
    maxi = arr[i];
}

findMAx(arr,n,i+1,maxi);

}

void findMIN(int arr[],int n,int i,int& min){

if(i>=n){
    return;
}
findMIN(arr,n,i+1,min);
if(arr[i]<min){
    min = arr[i];
}

// findMIN(arr,n,i+1,min);

}


int main(){
    
int arr[5] = {10,20,30,40,50};
int n = 5;
int i = 0;
int maxi = INT_MIN;
int min = INT_MAX;

 findMAx(arr,n,i,maxi);
cout<<maxi<<endl;

 findMIN(arr,n,i,min);
 cout<<min;

    return 0;
}