#include<iostream>
using namespace std;

int main(){
    
int n;
cout<<"Enter your n";
cin >> n;
int i = 0; // i = 0 ,1,2,3,4,....,n-1 which is basically n times
while(i<n){
    int j = 0;
    while(j<n){
        cout<<"* ";
        j= j+1;
    }
    cout<<endl;
    i = i + 1;
}




    return 0;
}                   