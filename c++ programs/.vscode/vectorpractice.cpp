#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cin >> size; 
vector <int> v(size);
cout<<"enter the elements"<<endl;
for(int i = 0; i<size; i++){
     cin>>v[i];     
     
}

//printing
v.insert(v.begin()+2,6);
for(int i = 0; i<v.size(); i++){
       cout<<v[i]<<" ";
}
cout<<endl;

v.erase(v.end()-2);

//while  loop
int idx = 0;
while(idx < v.size()){
       cout<<v[idx++]<<" ";
}
cout<<endl;

/* how you insert a element

//v.insert(v.begin()+2,6);


//for each loop

for(int ele:v){
       cout<<ele<<" ";
}
cout<<endl;

//v.erase(v.end()-2);

*/

       return 0;
}