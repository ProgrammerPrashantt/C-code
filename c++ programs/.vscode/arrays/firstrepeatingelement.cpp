#include<iostream>
using namespace std;

int firstRepeating(int arr[], int n){

for(int i = 0; i<n; i++){

bool isRepeat = false;
for(int j = i+1; j<n; j++){
    if(arr[i] == arr[j]){
        isRepeat = true;
          cout<<"The repearting element is "<<arr[i]<<endl;
        // return i + 1;
       
       
    }
}
}
// return - 1;

}


int main(){

int a[] = { 1,5,4,3,5,6};

int n = sizeof(a)/sizeof(int);

 int repeat = firstRepeating(a,n);

 

    return 0;
}   
