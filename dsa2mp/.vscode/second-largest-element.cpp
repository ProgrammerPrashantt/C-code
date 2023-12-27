#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestElementIndex(int array[] , int size){
    int max = INT_MIN;
    int maxindex ;
    for(int i = 0; i<size; i++){
        if(array[i]>max){
            max = array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
      
int main(){
    
  int array[] = { 2 , 3 , 5 , 7 , 6 , 1 , 7};
  int n = 7;
   int indexoflargest = largestElementIndex(array,6);
cout<<array[indexoflargest]<<endl;
// Array manipulation.
//array[indexoflargest] = -1;
int largestelement = array[indexoflargest];
for(int i = 0; i<n; i++){
 if(array[i] == largestelement){
    array[i] = -1;
 }
}
int indexofsecondlargest = largestElementIndex(array,6);
cout<<array[indexofsecondlargest]<<endl;

/*
2,3,5,7,6,1,7
index of largest = 3
2,3,5,-1,6,1,7
index of second largest = 7
*/

    return 0;
}   