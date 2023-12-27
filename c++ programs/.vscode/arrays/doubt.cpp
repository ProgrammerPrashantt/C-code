#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int incArr(int arr[], int n){

arr[1] = arr[1]+50;
cout<<"incrementation arr[1]: ";
cout<<arr[1]<<endl;
//printArray(arr,n);
}


int main(){

int arr[3] = {1,2,3};
int n = 3;

incArr(arr,n);

cout<<arr[1] - 50<<" <= 50 - ho gaya uske baad bhi print ho raha ";

// for(int i =0; i<n;i++){
//     cout<<arr[i]<<" ";
// }

printArray(arr,n);


return 0;
}