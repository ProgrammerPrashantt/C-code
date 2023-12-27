#include<iostream>
using namespace std;

int secondLargestElement(int arr[], int size){

int max = INT8_MIN;
int second_max = INT8_MIN;

for(int i = 0; i<size; i++){
    if(arr[i]>max){
        max = arr[i];

    }
}
        for(int i = 0; i<size; i++){
            if(arr[i] > second_max && arr[i]!= max){
                second_max = arr[i];
            }
        }
        return second_max;
}

int main(){
    
    int array [ ] = { 2 , 3 , 4 , 7 , 6 , 1 , 7}  ;
   int n =7;
    //    int secondmax = secondLargestElement(array,n);
    //    cout<<array[secondmax];
 cout<<secondLargestElement(array,n)<<endl;

    return 0;
}