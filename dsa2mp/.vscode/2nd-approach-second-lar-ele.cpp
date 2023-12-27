#include<iostream>
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
    

    return 0;
}   