#include<iostream>
#include<vector>
using namespace std;

// INTRO TO VECTOR
//Find unique element

int uni(vector<int>arr, int n){
int ans = 0;
for(int i = 0; i<n; i++){
 ans = ans ^ arr[i];   
}
return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
vector<int>v(n);

cout<<"Enter the elements in the array: "<<endl;

for(int i = 0; i<n; i++){
    cin>>v[i];
}

    // int unique = uni(v,n);
cout<<"The unique element is => "<<uni(v,n);
// cout<<unique;



    return 0;
}