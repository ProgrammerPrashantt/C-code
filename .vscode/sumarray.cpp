#include<iostream>
using namespace std;

int sumArray(int arr[] , int size){
int sum = 0;
  for(int i = 0; i<size; i++){

    sum = sum + arr[i];

  }
  return sum;
}

int main(){
    
  int maxblocks[100];
  int n;
  cin>>n;
  
  for(int i = 0; i<n; i++){
    cin>>maxblocks[i];
  }

 cout<< "Sum of the elements in the given array = "<<sumArray(maxblocks,n);

    return 0;
}