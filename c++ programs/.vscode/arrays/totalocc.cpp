#include<iostream>
#include<vector>
using namespace std;

int FirstOcc(vector<int>arr,int target){

int start = 0;

int end = arr.size()-1;

int mid = start + (end - start)/2;

int ans = -1;

while(start<=end){

if(arr[mid] == target){
ans = mid;
end = mid - 1;
}

else if(arr[mid]>target){
    end = mid - 1;
}
else if(arr[mid]<target){
 start = mid + 1;
}

mid = start +  (end - start)/2;

}

return ans;

}

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

int totalocc(vector<int>arr,int target){
   
int focc = FirstOcc(arr,target);

int lastocc = lastoccurance(arr,target);

int totalocc =  (lastocc+1) - (focc);

return totalocc;
}

int main(){

vector<int>arr{2,3,4,6,7,8,8,8,8,8,8,8,8,8,10};

int target = 8;

  cout<<"Total occurance of "<<target<<" is "<<totalocc(arr,target);

    return 0;
}   

