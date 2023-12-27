#include<iostream>
#include<vector>
using namespace std;

//maza aagaya kya code hain dry run karo agar bhul gaye toh best wala


int findpivot(vector<int>arr){

int start = 0;
int end = arr.size() - 1;
int mid = start + (end - start)/2;

while(start<end){


if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
    return mid;

}else if(arr[mid]>arr[start]){
    start = mid+1;
}
else if(arr[mid]<arr[end]){
    end = mid-1;
}

mid = start + (end - start)/2;

}

}

                                                            
int main(){
    
    vector<int> arr {3,4,5,6,7,8,0,1,2};

    int ans = findpivot(arr);

  cout<<"Pivot element is "<<ans;

    return 0;
}   