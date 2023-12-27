#include<iostream>
using namespace std;
// Reverse an array
// IT IS THE SOLUTION TO REVERSE THE ARRAY NOT FOR SORTING THE ARRAY
int swap(){
    int val1, temp , val2;
     val1 = temp;
     val1 = val2;
     val2 = temp;
}

int reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;
    for(int i = 0; i<n; i++){
        if(start<end){
            swap(arr[start],arr[end]);
            start ++;
            end --;
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
int arr[5] = {50,60,80,90,100};
int n = 5;
//******************************************************************************************************************
// int start = 0;
// int end = n - 1;

// while(start<=end){

// swap(arr[start],arr[end]);
// start ++;
// end --;

// }
// for(int i = 0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
//****************************************************************************************************************
  
reverse(arr,n);

    return 0;
}