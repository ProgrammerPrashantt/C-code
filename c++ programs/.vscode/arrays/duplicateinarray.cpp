#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int FindDuplicate(vector<int>a){

sort(a.begin(),a.end());

for(int i = 0; i<a.size();i++){
    if(a[i]==a[i+1]){
        cout<<a[i];
        return a[i];
    }
}
return - 1;

}


int main(){
    
 vector<int>arr{1,3,4,2,2};

 FindDuplicate(arr);


    return 0;
}   