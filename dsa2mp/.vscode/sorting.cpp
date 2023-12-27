#include<iostream>
using namespace std;

int main(){

int arr [ ] = { 1 , 2 ,3 ,4 , 5 , 7};

int size = 6;

for(int i = 0; i<size; i++){
    for(int j = i+1; j<size; j++){
        if(arr[i]<arr[j]){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
}
 cout<<"\n Array after swapping ";

 for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
 }        
       
    return 0;
}   