#include<iostream>
using namespace std;

//Move all number to the left side of the array

void moveAllNegativeToLeft(int arr[],int size){

        int l = 0 , h = size-1;

        while(l<h){
            if(arr[l]<0){
                l++;
            }
            else if(arr[h]>0){
                h--;
            }
             else {
            swap(arr[l],arr[h]);
        }

}

for(int i = 0; i<size;i++){
    cout<<arr[i]<<" ";
}


}
int main(){
    
    int a[] = {1,2,-3,4,-5,6};
    int n = sizeof(a)/sizeof(int);

    moveAllNegativeToLeft(a,n);

    return 0;
}   