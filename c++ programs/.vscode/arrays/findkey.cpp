#include<iostream>
using namespace std;

int f(int arr[],int n,int key){
bool flag;
for(int i = 0; i<n; i++){
    if(arr[i]==key){
  flag = 1;
    }
}
if(flag){
    cout<<"Present";
}else{
    cout<<"Absent";
}
}

int main(){


int arr[5]={1,2,3,4,5};
int n = 5;
int key = 0;

f(arr,n,key);

    return 0;
}   