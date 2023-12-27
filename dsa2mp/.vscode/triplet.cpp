#include<iostream>
using namespace std;

/*
[3,1,2,4,0,6]
targetsum = 6
triplets = 2
i = 0, j = 1, k = 2
arr[i] = 3 + arr[j] = 1 + arr[k] = 2
*/


int main(){
    
        int arr [] = { 3,1,2,4,0,6};
        int targetsum = 6;
        int n = 6;
int triplets = 0;
        for(int i = 0; i<n; i++){
            for(int j = i + 1; j<n; j++){
            for(int k = j + 1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == targetsum)
                  { triplets++;
                  }
        }
            }
        }
             cout<<triplets<<endl;
    return 0;
}