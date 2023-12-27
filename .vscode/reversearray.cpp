#include<iostream>
using namespace std;

void printArray(int arr[], int n){

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
         cout<<endl;
}

void reverse(int arr[], int n){

   int start = 0;
   int end  = n - 1; // kyunki index 0 se start hota hain isliye last block n - 1 hoga array ka

   while (start<=end){
    //terminating condition is START>END
    swap(arr[start],arr[end]);
    start ++;
    end --;
   }
}

int main(){

int arr[5] = {2,3,4,5,6};
            //0,1,2,3,4
int n = 5;

reverse(arr,n);
printArray(arr,n);

    return 0;
}