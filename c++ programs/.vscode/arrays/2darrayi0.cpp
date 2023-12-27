#include<iostream>
#include<vector>
using namespace std;

int main(){

int arr[3][3];

int rows = 3;
int cols = 3;

cout<<"Enter the elements according top your col n rows"<<endl;

for(int i = 0; i<rows; i++){

for(int j = 0; j<cols; j++){

cin>>arr[i][j];

}
cout<<endl;
}

for(int i = 0; i<rows; i++){

for(int j = 0; j<cols; j++){

cout<<arr[i][j]<<" ";

}
cout<<endl;
}


    return 0;
}