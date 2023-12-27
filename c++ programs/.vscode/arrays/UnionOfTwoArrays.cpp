#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Union of two arrays


int main(){
 int n , m ;

 cout<<"Enter the size of 1st array"<<endl;
 cin>>n;   
 cout<<"Enter the size of 2nd array"<<endl;
 cin>>m;   
vector<int>a(n);
vector<int>b(m);

cout<<"Enter the elements in the 1st array: "<<endl;
for(int i = 0; i<a.size(); i++){
    cin>>a[i];
}
cout<<"Enter the elements in the 2nd array: "<<endl;
for(int i = 0; i<b.size(); i++){
    cin>>b[i];
}
cout<<endl;
// cout<<"Printing the result "<<endl;



vector<int>ans;

for(int i = 0; i<n; i++){
    ans.push_back(a[i]);
}
for(int i = 0; i<m; i++){
    ans.push_back(b[i]);
}
// // std::sort(ans,n+m);
cout<<"Union array is : ";
for(int i = 0; i<ans.size(); i++){
    if(ans[i] != ans[i-1]){ //union de raha par same element remove nahi kar raha hain
    cout<<ans[i]<<" ";}
}


    return 0;
}