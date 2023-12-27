#include<iostream>
#include<vector>
using namespace std;

int lastoccurance(vector<int>arr,int target){

int start = 0;
int end = arr.size() - 1;
int mid = start + (end - start) / 2;

int ans = -1;

while(start<=end){

if(arr[mid] == target){

ans = mid;
start = mid+1;
}
else if(arr[mid]<target){
    start = mid+1;
}
else if(arr[mid]>target){
    end = mid - 1;
}

mid = start + (end - start)/2;

}

return ans;

}


int main(){
    
vector<int>arr{1,4,4,4,4,4,7};

int target = 4;

int lastocc = lastoccurance(arr,target);

cout<<"Last occurance is on: "<<lastocc<<" index";

    return 0;
}   