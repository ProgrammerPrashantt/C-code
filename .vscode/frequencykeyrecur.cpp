#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

void findKey(string str,int n,int i,char key,vector<int>& ans){

//base case 

if(i>n){
    return ;
}

//1 case solve kardo
if(str[i] == key){
   // cout<<"Found at "<<i<<endl;
   ans.push_back(i);
    
}
//baaki recursion sambhal lega

findKey(str,n,i+1,key,ans);

//  cout<<"Printing answer"<<endl;

// for(auto val : ans){
//     cout<<val<<" ";
// }

}



int main(){

string  str  = "Prashant Shrivastava";
int n = 19;
int i = 0;
int key = 'a';

vector<int>ans;



// bool ans = findKey(str,n,i,key);

// if(ans = true){
//     cout<<"find";
// }else{
//     cout<<"not find";
// }

 findKey( str,n,i,key,ans);

 cout<<"Printing answer"<<endl;

for(auto val : ans){
    cout<<val<<" ";
}

    return 0;
}