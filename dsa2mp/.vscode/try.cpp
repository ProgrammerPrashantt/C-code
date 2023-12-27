#include<iostream>
using namespace std;

int largestElementIndex(int arr[] , int size){
    int max = INT16_MIN;
    int maxindex;
    for(int i = 0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main(){

    int array[] = { 2 , 3 , 5 , 7 , 6 , 1 , 7};
    int n = 7;
   int sabsebada = largestElementIndex(array,7);
   cout<<array[sabsebada]<<endl;

  // array[sabsebada] = -1;
  int dusrabada = array[sabsebada];
  for(int i = 0; i<n; i++){
    if(array[i] == dusrabada){
          array[i] = -1;
    }
  }
    int indexofsecondlargest = largestElementIndex(array,7);
cout<<array[indexofsecondlargest]<<endl;
    return 0;
}