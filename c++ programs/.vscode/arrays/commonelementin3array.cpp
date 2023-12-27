#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> commonElements(int a[], int b[], int c[],int n1, int n2, int n3){

vector<int>ans;
set<int>st;
int i,j,k;
i=j=k=0;
while(i<n1 && j<n2 && k<n3){
    if(a[i]==b[j] && b[j]==c[k]){
        st.insert(a[i]);
        i++,j++,k++;
    }
    else if(a[i]<b[j]){
        i++;
    }else if(b[j]<c[k]){
        j++;
    }else {
        k++;
    }
}

for(auto i:st){
    ans.push_back(i);
}

for(int i=0; i<ans.size();i++){
    cout<<" "<<ans[i];
}




}


int main(){
    
   
int a[] = { 1,3,10,20,40,80};
int n1 = sizeof(a)/sizeof(int);
   
int b[] = { 6,7,20,80,100};
int n2 = sizeof(b)/sizeof(int);
   
int c[] = { 3,4,15,20,30,70,80,120};
int n3 = sizeof(c)/sizeof(int);
//answer is 20 and 80|
cout<<"common elements are";
 commonElements(a,b,c,n1,n2,n3);


    return 0;
}