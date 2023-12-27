#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int firstRepeating(int a[], int n){
unordered_map<int, int>hash;
for(int i = 0; i<n; i++){
    hash[a[i]]++;
}
for(int i = 0; i<n; i++){
    if(hash[a[i]]>1){
        return i+1;
    }
}
return -1;
}
int main(){
    
int a[] = { 1,4,0,3,5,6,3};
int n = sizeof(a)/sizeof(int);

 cout<< firstRepeating(a,n);

    return 0;
}