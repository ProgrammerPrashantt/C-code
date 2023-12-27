#include<iostream>
#include<limits.h>
using namespace std;

int maxi (int arr[], int n){

int maxi = INT_MIN;

for(int i = 0; i<n; i++)
{
    if(arr[i]>maxi){
        maxi = arr[i];
    }
 
}

return maxi;
}

int mini(int arr[], int n){

int mini = INT_MAX;

for(int i = 0; i<n; i++)
{
    if(arr[i]<mini){
        mini = arr[i];
    }
 
}

return mini;

}

int main(){
    

int arr[10] = {4,567,6,45,5,67,6,5,4,3};
int n = 10;

int ans = maxi(arr,n);
int ans2 = mini(arr,n);
cout<<"The maximum value of the array is "<<ans<<" "<<"the minimum value in the array is "<<ans2;

    return 0;
}   