#include<iostream>
using namespace std;

int main(){
    
  int arr[] = { 3,1,2,4,0,6};
  int sum = 5;
  int n = 6;
  int pairs = 0;
  int ans = 0;

    for(int i = 0; i<n-1; i++){
    for(int j = i + 1; j<n-1; j++){
         
   if(arr[i] + arr[j] == sum ){
    pairs ++;
    
    }
    }
    }
  


cout<<pairs<<endl;


    return 0;
}