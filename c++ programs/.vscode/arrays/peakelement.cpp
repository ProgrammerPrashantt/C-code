#include<iostream>
#include<vector>
using namespace std;

int missingelement(vector<int>arr){

int start = 0;

int end = arr.size() - 1;

int mid = start + (end - start)/2;

while(start<end){

    if(arr[mid] < arr[mid+1]){
        start = mid+1;
    }else{
        end = mid;
    }
mid = start + (end - start)/2;
}

return mid;
}


int main(){
    
vector<int>arr{1,2,3,45};

int ans = missingelement(arr);

cout<<"The peak element is at index "<<ans;

    return 0;
}   