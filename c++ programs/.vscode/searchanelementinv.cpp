#include<iostream>
#include<vector>
using namespace std;

int main(){
cout<<"Enter the elements "<<endl;
   vector<int>v(6);
   for(int i = 0; i<6; i++){
    cin>>v[i];
   }
   cout<<endl;

   int x;
   cout<<"Enter the element you wanna search for "<<endl;
   cin>>x;
vector<int>ba(6); 
int count = 0;
for(int i = 0; i<v.size(); i++){
    if(v[i]>x){
        count ++;    
    };
  
};
  for(int i = 0; i<ba.size(); i++){
        if(v[i]>x){
            ba.insert(ba.begin(),v[i]);

        };
        cout<<ba[i]<<" ";
    };

cout<<endl;
 cout<<count;

    return 0;
}   